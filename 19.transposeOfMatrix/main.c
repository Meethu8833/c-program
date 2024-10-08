/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100][100],i,j,m,n;
    printf("Enter the rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("The original matrix is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("The transposed matrix is :\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
