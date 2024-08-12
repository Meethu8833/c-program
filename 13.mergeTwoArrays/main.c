/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],b[100],c[100];
    int i,n,m;
    printf("Enter the size of 1st array: ");
    scanf("%d",&n);
    printf("Enter the elements of 1st array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of 2nd array: ");
    scanf("%d",&m);
    printf("Enter the elements of 2nd array:\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++){
       c[i]=a[i]; 
    }
    for(i=0;i<m;i++){
        c[n+i]=b[i];
    }
    
    for(i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }
    
    return 0;
}
