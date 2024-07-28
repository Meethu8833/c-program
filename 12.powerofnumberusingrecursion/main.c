/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int power(int,int);
int main()
{
    int num,p;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&p);

    printf("%d^%d is %d\n",num,p,power(num,p));
    return 0;
}

int power(int n,int p)
{
    if(p!=1)
    {
        return n*power(n,p-1);
    }
    
}