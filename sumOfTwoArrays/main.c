/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a1[100],a2[100],a3[100],n,i,j;
    printf("Enter the size of arrays: ");
    scanf("%d",&n);
    printf("Enter the elements of first array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter the elements of second array:\n");
    for(i=0;i<n;i++){
    scanf("%d",&a2[i]);
    }
    // printf("The sum is:"); 
    for(i=0;i<n;i++)
    {
        a3[i]=a1[i]+a2[i];
        // printf("%d+%d=%d\n",a1[i],a2[i],a1[i]+a2[j]);
    }
    printf("The sum of array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a3[i]);
    }
    
    return 0;
}
