#include <stdio.h>

int main()
{
    int start,end,i,sum;
    printf("Enter the first number: ");
    scanf("%d",&start);
    printf("Enter the last number: ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        sum=sum+i;
    }
    printf("Total sum of numbers is: %d",sum);
    return 0;
}
