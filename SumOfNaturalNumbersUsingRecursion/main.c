#include <stdio.h>

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
int main()
{
    int num;
    printf("Enter the limit: ");
    scanf("%d",&num);
    
    printf("The sum of %d natural numbers : %d",num,sum(num));
    
    return 0;
}
