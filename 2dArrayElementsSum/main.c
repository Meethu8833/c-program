/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a1[2][3]={{1,2,3},{4,5,6}};
    int a2[2][3]={{2,3,4},{5,6,7}};
    int a3[100][100],i,j;
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("a1[%d][%d]= %d  a2[%d][%d]= %d\n",i,j,a1[i][j], i,j,a2[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            a3[i][j]=a1[i][j] + a2[i][j];
        }
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("a3[%d][%d] = %d\n",i,j,a3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
