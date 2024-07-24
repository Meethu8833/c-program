#include <stdio.h>

int main()
{
    int a,b;
    char op;
    printf("Enter the operator(+,-,*,/,% ): ");
    scanf("%c",&op);
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    
    switch(op)
    {
        case '+':
            printf("Sum is %d",a+b);
            break;
        case '-':
            printf("Difference is %d",a-b);
            break;
        case '*':
            printf("Product is %d",a*b);
            break;
        case '/':
            printf("Quotient is %d",a/b);
            break;
        case '%':
            printf("Remainder is %d",a%b);
            break;
        default:
            printf("Invalid Operator!");
    }
    return 0;
}
