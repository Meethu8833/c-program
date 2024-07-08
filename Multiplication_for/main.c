/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,i,pro,limit;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        pro=a*i;
        printf("%d \n",pro);
    }
    return 0;
}