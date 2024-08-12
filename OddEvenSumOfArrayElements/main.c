/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,even=0,odd=0;
    int a[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }
    }
    printf("The sum of even numbers: %d\nThe sum of odd numbers: %d",even,odd);
    return 0;
}
