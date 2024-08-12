/*Read size and array elements from user ,then ask for two intervals. Sort the elements in that interval in ascending 
order and print it. Ask user for a number and find whether it is present in the array or not ,print it. */

#include <stdio.h>

int main()
{
    int a[100],n,i,start,end,j,temp=0,num,val=0;
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter the first interval: ");
    scanf("%d",&start);
    printf("Enter the second interval: ");
    scanf("%d",&end);
    
    for(i=start;i<end;i++){
        for(j=i+1;j<end;j++){
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=start;i<end;i++){
        printf("%d ",a[i]);
    }
    
    //search
    
    printf("\n\nEnter the element to find: ");
    scanf("%d",&num);
    
    for(i=0;i<n;i++)
    {
        if(num==a[i]){
            printf("%d is found in the array",num);
            val=1;
            break;
        }
    }
    if(val==0){
        printf("%d is not found in the array",num);
    }
    return 0;
}