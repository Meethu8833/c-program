/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,num,sum=0,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    // printf("sum is: %d\n",sum);
    if(num%sum==0)
    {
        printf("%d is a harshad number",num);
    }
    else{
        printf("%d is not a harshad number",num);
    }
    return 0;
}
