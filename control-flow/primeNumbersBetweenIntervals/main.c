#include <stdio.h>

int main()
{
    int i,j,count,start,end;
    printf("Enter the start: ");
    scanf("%d",&start);
    printf("Enter the end: ");
    scanf("%d",&end);
    
    for(i=start;i<=end;i++)
    {
          count=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    count=1;
                    break;
                }
            }
            if(count==0&&i!=1)
                printf("%d ",i);
        
    }
    return 0;
}
