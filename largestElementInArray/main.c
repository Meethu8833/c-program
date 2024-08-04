/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],n,i,largest;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elemets:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(largest<a[i]){
            largest=a[i];
        }
    }
    printf("The largest element in the array is: %d",largest);
    return 0;
}