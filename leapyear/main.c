/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int yr;
    printf("Enter the year");
    scanf("%d",&yr);
    if(yr%4==0){
        printf("%d is leap year",yr);
    }
    else{
        printf("%d is not a leap year",yr);
    }
    return 0;
}