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
    int i,len;
    char s[100],c[100];
    printf("Enter a string to reverse:");
    scanf("%s",s);
    len=strlen(s);
    
    for(i=len-1;i>=0;i--){
    c[len-1-i]=s[i];
    }
    for(i=0;i<len;i++){
        printf("%c ",c[i]);
    }
    return 0;
}