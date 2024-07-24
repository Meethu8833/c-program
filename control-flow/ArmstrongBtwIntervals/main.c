#include <stdio.h>
#include <math.h>

int main()
{
    int start,end,n,num,rem,quo,sum,count=0,p,num1,r,q;
    printf("Enter the first interval: ");
    scanf("%d",&start);
    printf("Enter the second interval: ");
    scanf("%d",&end);

    
    for(n=start;n<=end;n++)
    {
        num=num1=n;                  
        
        rem=0;
        quo=0;
        count=0;
        
        while(num1!=0)
        {
            rem=num1%10;           
            quo=num1/10;           
            count++;            
            num1=quo;              
        }
        
        r=0;
        q=0;
        sum=0;
        
        while(num!=0)
        {
            r=num%10;             
            q=num/10;             
            p=pow(r,count);       
            sum=sum+p;              
            num=q;
        }
        
        if(sum==n)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}