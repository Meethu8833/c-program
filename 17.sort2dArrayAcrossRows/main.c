/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100][100],i,j,k,m,n,temp=0;
    
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    printf("Enter 2D array elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i][k]<a[i][j])
                {
                    temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }
            }
        }
    }
    
    printf("\nSorted 2D array across rows:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
