/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int n,num,rem,quo,sum=0,count=0,p,num1;
    printf("Enter the number to check whether it is Armstrong or Not: ");
    scanf("%d",&n);
    
    num=n;
    num1=n;
    
    while(n!=0)
    {
        rem=n%10;
        quo=n/10;
        count++;
        n=quo;
    }
    rem=0;
    quo=0;

    while(num!=0)
    {
        rem=num%10;
        quo=num/10;
        p=pow(rem,count);
        sum=sum+p;
        num=quo;
    }
    // printf("%d",sum);
    if(sum==num1)
    {
        printf("%d is an Armstrong number",num1);
    }
    else{
         printf("%d is not an Armstrong number",num1);
    }
    return 0;
}