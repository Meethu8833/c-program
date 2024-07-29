/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int disarium(int num,int count)
{
    int n,rem,p,sum=0;
    n=num;
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
}
int main()
{
    int num,num1,r,q,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    num1=num;
    
    while(num1!=0)
    {
        r=num1%10;
        count++;
        q=num1/10;
        num1=q;
    }
    disarium(num,count);
    return 0;
}