/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a,b,c;
    char op;
    printf("Enter the operator to perform:");
    scanf("%c",&op);
    printf("Enter 2 numbers: ");
    scanf("%f %f",&a,&b);
   
    
    switch(op){
        case '+':
            printf("Sum is: %f",a+b);
            break;
        case '-':
            printf("Difference is: %f",a-b);
            break;
        case '*':
            printf("Product is: %f",a*b);
            break;
        case '/':
            printf("Quotient is: %f",a/b);
            break;
        // case '%':
        //     printf("Reminder is: %d",a%b);
        //     break;
            
            default:
            printf("Invalid operator");
            break;
    }
    return 0;
}

