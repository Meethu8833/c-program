/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100],n,i,b[100],count=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            
            b[count]=arr[i];
            count++;
            // printf("%d ",arr[i]);
        }
    }
    
    printf("The new array is:\n");
    for(i=0;i<count;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}