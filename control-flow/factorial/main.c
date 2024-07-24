#include <stdio.h>

int main()
{
    int fact=1,n,i;
    printf("Enter the number to find factorial: ");
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial is: %d",fact);
    return 0;
}
