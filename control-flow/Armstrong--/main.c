#include <stdio.h>

int main()
{
    int i,n,len=0,a,b;
    printf("Enter a number to check whether it is Armstrong: ");
    scanf("%d",&n);
    a=n;
    
    while(a!=0)
    {
        a=a/10;
        len++;
    }
    printf("%d\n",len);
    b=n^len;;
    printf("%d",a);
    return 0;
}
