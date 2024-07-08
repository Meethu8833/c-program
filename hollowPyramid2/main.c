/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n=5,a;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("  ");
        }
        for(k=0;k<=i;k++)
        {
            if(k==0||k==i){
                printf("*   ");
            }
            else{
                printf("    ");
            }
            
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=n-i;k++)
        {
            if(k==1||k==n-i){
                printf("*   ");
            }
            else{
                printf("    ");
            }
            
        }
        printf("\n");
    }
    
    
    return 0;
}