/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,val=0;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter the number to find: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        if(n==a[i]){
            printf("%d is present in the array.",n);
            val=1;
        }
    }
    if(val==0){
        printf("%d is not present in the array.",n);
    }
    return 0;
}
