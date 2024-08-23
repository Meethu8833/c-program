/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100],n,val=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("The elements that only appears once:\n");
    for(int i=0;i<n;i++)
    {
        val=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                val=1;
            }
        }
        if(val==0)
        {
            printf("%d\n",a[i]);
        }
    }
   
    return 0;
}