/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=5,m=9,i,j;
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            for(j=1;j<=m;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
        else
        {
            for(j=1;j<=m;j++)
            {
                if(j==i||j==(m+1)-i)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    for(i=1;i<n;i++)
    {
        if(i==n-1)
        {
            for(i=1;i<=m;i++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=0;j<=(m+1)-i;j++)
            {
                if(j==(m/2)-i||j==(m/2)+i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
