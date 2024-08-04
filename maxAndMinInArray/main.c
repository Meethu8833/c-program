/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],n,i,min,max;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i]){
            min=a[i];
        }
        else if(max<a[i]){
            max=a[i];
        }
    }
    printf("The smallest element is: %d\nThe largest element is: %d",min,max);
    return 0;
}
