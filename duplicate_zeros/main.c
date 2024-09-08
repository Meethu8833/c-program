/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,temp=0,n,t=0,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\n");
    
    for(i=0;i<n;i++){               
        if(arr[i]==0){              
            for(j=i+1;j<n;j++){         
                temp=arr[i+1];      
                arr[i+1]=arr[j+1];      
                arr[j+1]=temp;          
            }
            arr[i+1]=0;
            i++;
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}