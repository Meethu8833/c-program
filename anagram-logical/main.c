/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int l1,l2,i,j,val=0;
    char word1[100],word2[100],temp,temp1;
    printf("Enter word1: ");
    scanf("%s",word1);
    printf("Enter word2: ");
    scanf("%s",word2);
    l1=strlen(word1);
    l2=strlen(word2);
    
    for(i=0;i<l1;i++)
    {
       for(j=i+1;j<l1;j++)
       {
           if(word1[i]>word1[j])
           {
               temp=word1[i];
               word1[i]=word1[j];
               word1[j]=temp;
           }
       }
    }
    
    printf("\n");
    
    for(i=0;i<l2;i++)
    {
       for(j=i+1;j<l2;j++)
       {
           if(word2[i]>word2[j])
           {
               temp1=word2[i];
               word2[i]=word2[j];
               word2[j]=temp1;
           }
       }
    }
   
    
    //checking
    
    if(l1!=l2)
    {
        printf("Not anagram\n");
    }
    else
    {
        for(i=0;i<l1;i++)
        {
            if(word1[i]!=word2[i])
            {
                val=1;
            }
        }
        if(val==1)
        {
            printf("It is not anagram.\n");
        }
        else{
            printf("It is anagram.\n");
        }
    }
    return 0;
}