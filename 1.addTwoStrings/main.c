/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],c[100];
    printf("Enter the 1st string: ");
    fgets(a,100,stdin);
    printf("Enter the 2nd string: ");
    fgets(b,100,stdin);
    
    strcat(a,b);
    printf("The concatinated string is:\n%s",a);
    
 return 0;
} 