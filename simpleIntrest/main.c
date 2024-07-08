/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a,p,r,t;
    printf("Enter the Initial Principal balance : ");
    scanf("%f",&p);
    printf("Enter Annual intreset rate: ");
    scanf("%f",&r);
    printf("Enter the Time in Years: ");
    scanf("%f",&t);
    a=p*(1+r*t);
    printf("final amount: %f",a);
    return 0;
}
