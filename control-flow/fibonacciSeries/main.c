#include <stdio.h>

int main()
{
    int i,lim,fib=0,a=1;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++)
    {
        printf("%d ",fib);            
        fib=fib+a;                  
        a=fib-a;                    
    }
    return 0;
}