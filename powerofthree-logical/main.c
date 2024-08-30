/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,val=0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=0;i<1000;i++)
    {
        if(n==pow(3,i))
        {
            val=1;
            printf("True");
        }
    }
    if(val==0)
    {
        printf("False");
    }
    return 0;
}