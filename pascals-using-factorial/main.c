/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int factorials(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

void printPascalsTriangle(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",factorials(i,j));
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    printPascalsTriangle(rows);
    return 0;
}