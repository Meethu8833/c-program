/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,product;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if((a>0)&&(b>0))
    {
        product=a*b;
        printf("The product is %d",product);
        if(product%2==0)
        {
            printf("\n %d is even ",product);
        }
        else{
            printf("\n %d is odd ",product);
        }
        
    }
    else{
        printf("Number is negative");
    }
    return 0;
}