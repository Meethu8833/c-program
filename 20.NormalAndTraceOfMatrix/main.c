/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int a[100][100],n,i,j;
    float sum=0,nor=0,trace=0;
    printf("Enter the size of square matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            sum=sum+(a[i][j]*a[i][j]);
            
            if(a[i][j]==a[j][i]){
                trace=trace+a[i][j];
            }
        }
    }
    nor=sqrt(sum);
    printf("Normal of the given matrix is: %f\n",nor);
    printf("Trace of the given matrix is: %f",trace);
    
    return 0;
}