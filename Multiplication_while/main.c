/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,i=1,pro;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Multiplication table of %d:\n",a);
    while(i<=10)
    {
        pro=a*i;
        printf("%d*%d=%d \n",a,i,pro);
        i=i+1;
    }

    return 0;
}
