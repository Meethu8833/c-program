/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,j,temp;
   
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        // printf("%d ",a[i]);
    }
    printf("Reversed array is:\n");
    for(i=0;i<10;i++)
        {
            printf("%d ",a[i]);
        }
        return 0;
}               