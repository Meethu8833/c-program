/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],b[100],n,i;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    
    printf("Copied array:\n");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
