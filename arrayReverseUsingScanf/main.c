/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100];
    int i,j,temp,n;
   printf("Enter the size of the array: ");
   scanf("%d",&n);
   printf("Enter the array elements:\n");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        // printf("%d ",a[i]);
    }
    printf("Reversed array is:\n");
    for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        return 0;
}               