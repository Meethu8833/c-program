/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main ()
{
    int i,j,temp;
    int a[10]={10,9,7,101,23,44,12,78,34,23};
    for(i=0;i<10;i++)                          // i=0
    {
        for(j=i+1;j<10;j++)     //j=1
        {
            if(a[j]>a[i])
            {
            temp=a[i];      //temp=
            a[i]=a[j];      //a[i]=
            a[j]=temp;      //a[j]=
            
            }
        }
    }
    printf("Sorted element list: \n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}
