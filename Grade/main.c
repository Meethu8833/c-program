/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mark;
    printf("Enter your mark: ");
    scanf("%d",&mark);
    if(mark>100)
    {
        printf("Invalid!");
    }
    else if(mark>=90)
    {
        printf("A Grade");
    }
    else if(mark>=80)
    {
        printf("B Grade");
    }
    else if(mark>=70)
    {
        printf("C Grade");
    }
    else if(mark>=60)
    {
        printf("D Grade");
    }
    else{
        printf("Failed!");
    }
    return 0;
}
