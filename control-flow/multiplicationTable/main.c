/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,pro,n,lim;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the limit: ");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++)
    {
        pro=n*i;
        printf("%d*%d=%d\n",i,n,pro);
    }
    return 0;
}
