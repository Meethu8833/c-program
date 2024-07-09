/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n=9,m;
    m=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(j=0;j<=m;j++)
            {
                printf("* ");
            }
        
        }
        else if(i==m)
        {
            for(k=0;k<=m;k++)
            {
                if(k==0||k>m/2){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        else if(i>m)
        {
            for(j=0;j<=m;j++)
            {
                if(j==0||j==m){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        else{
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}
