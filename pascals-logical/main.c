/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,ind=0,i,j,a[100];
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                a[ind]=1;
                printf("%d ",a[ind]);
            }
            else{
                a[ind]=a[ind-i-1]+a[ind-i];
                printf("%d ",a[ind]);
            }
            ind++;
        }
        printf("\n");
    }
    // for(i=0;i<=ind;i++)
    // {
    //     printf("%d ",a[i]);
    // }
    return 0;
}