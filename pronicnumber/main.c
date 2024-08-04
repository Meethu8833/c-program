#include <stdio.h>

void pronic(int n)
{
    int i,pr=0;
    for(i=0;i<=n;i++)
    {
            if(n==i*(i+1))
            {
                printf("%d*%d\n%d is a pronic number",i,i+1,n);
                pr=1;
            }
    }
    if(pr==0){
        printf("%d is not a pronic number",n);
    }
    
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    pronic(n);
    return 0;
}