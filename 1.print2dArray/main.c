/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,m,n;
    int arr[100][100];
    printf("Enter the rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter the array elements: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("arr[%d] [%d] = %d ",i,j,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}