/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,temp=0,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            temp++;
            break;
        }
        
    }
    if(temp==0 && num!=1)
    return 0;
}
