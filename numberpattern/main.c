/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n=6,a=1;
    for(i=0;i<n;i++)                
    {
        for(j=0;j<=i;j++)           
        {
            printf("%d ",a);        
            a++;                    
        }
        a=a-i;                  
        printf("\n");
    }
    return 0;
}
