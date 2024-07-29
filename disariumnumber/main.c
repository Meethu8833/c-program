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
    int num,n,num1,r,q,rem,count=0,p,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    n=num;
    num1=num;
    
    while(num1!=0)
    {
        r=num1%10;
        count++;
        q=num1/10;
        num1=q;
    }
    while(n!=0)
    {
        rem=n%10;
        p=pow(rem,count);
        sum=sum+p;
        n=n/10;
        count--;
    }
    printf("sum is: %d\n",sum);
    if(num==sum)
    {
        printf("%d is a disarium number.",num);
    }
    else{
        printf("%d is not a disarium number.",num);
    }
    return 0;
}