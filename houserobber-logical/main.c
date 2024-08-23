/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],n,sum=0,i;
    printf("Enter the no. of houses: ");
    scanf("%d",&n);
    printf("Enter the money: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    if(n==2){
        if(a[0]>a[1]){
            printf("Total amount you can rob= %d",a[0]);
        }
        else{
            printf("Total amount you can rob= %d",a[1]);
        }
    }
    else{
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum=sum+a[i];
            }
        }
        printf("Total amount you can rob= %d",sum);
    }
    return 0;
}