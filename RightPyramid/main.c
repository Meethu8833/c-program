/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}