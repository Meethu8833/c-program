/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int num,rem,quo,sum=0,count=0,p,num1;
    
    num=n;
    num1=n;
    
    while(n!=0)
    {
        rem=n%10;
        quo=n/10;
        count++;
        n=quo;
        
    }
    
    while(num!=0)
    {
        rem=num%10;
        quo=num/10;
        p=pow(rem,count);
        sum=sum+p;
        num=quo;
    }
    if(num1==0)
    {
        printf("%d is not an Armstrong number\n",num1);
    }
    else if(sum==num1)
    {
        printf("%d is an Armstrong number\n",num1);
    }
    else{
         printf("%d is not an Armstrong number\n",num1);
    }
    return 0;
}

void prime(int n)
{
    int i,count;
    if(n==1)
    {
        printf("%d is not a prime number\n",n);
    }
    else
    {
        for(i=2;i<n/2;i++)
        {
            count=0;
            if(n%i==0)
            {
                printf("%d is not a prime number\n",n);
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%d is a prime number\n",n);
        }
    }
    
}
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    prime(n);
    armstrong(n);
}

