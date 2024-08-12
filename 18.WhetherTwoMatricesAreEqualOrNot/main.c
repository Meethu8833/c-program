/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100][100],b[100][100],i,j,m,n,val=0;
    
    printf("Enter the 2D array size as rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of 1st array:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the elements of 2nd array:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=b[i][j])
            {
                val=1;
            }
        }
    }
    
    if(val==0){
        printf("The given two matrices are equal.");
    }
    else{
        printf("The given two matrices are not equal.");
    }
    return 0;
}
