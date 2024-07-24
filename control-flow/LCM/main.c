#include <stdio.h>

int main()
{
    int i,a,b,c;
    printf("Enter two numbers to find LCM: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
    }
    else{
        c=b;
    }
    for(i=c;i<a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("LCM is %d",i);
            break;
        }
    }
    return 0;
}