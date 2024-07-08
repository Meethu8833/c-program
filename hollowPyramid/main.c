/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n=5;
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf("  ");
        }
        for(j=0;j<=0;j++)
        {
            printf("* ");
            
        }
        for(l=0;l<i;l++)
        {
            printf("    ");
        }
        for(m=0;m<1;m++)
        {
            printf("* ");
        }
        
        printf("\n");
    }   
    for(i=0;i<=n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf("  ");
        }
        for(j=0;j<=0;j++)
        {
            printf("* ");
            
        }
        for(l=0;l<n-i;l++)
        {
            printf("    ");
        }
        for(m=0;m<1;m++)
        {
            printf("* ");
        }
        
        printf("\n");
    }   
    
    return 0;
}