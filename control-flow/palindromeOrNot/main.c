#include <stdio.h>

int main()
{
    int a,b,c,num,rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=num;
    while(a!=0)
    {
        b=a%10;
        c=a/10;
        rev=rev*10+b;
        a=c;
    }
    if(rev==num)
    {
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
    return 0;
}