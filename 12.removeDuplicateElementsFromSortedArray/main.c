/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100];
    int i,j,temp,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            for(j=i+1;j<n;j++){
                a[j]=a[j+1];
                // a[j+1]=0;
                // n--;
            }
            n--;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
