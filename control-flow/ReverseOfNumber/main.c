/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,rev,rem,quo;
    printf("Enter a number to reverse: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        quo=num/10;
        rev=rev*10+rem;
        num=quo;
    }
    printf("Reversed Number: %d",rev);
    return 0;
}
