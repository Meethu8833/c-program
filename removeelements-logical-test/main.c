/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i,len;
    char s[100],ch;
    printf("Enter a string : ");
    fgets(s,50,stdin);
    printf("Enter the character to remove: ");
    scanf("%c",&ch);
    
    len=strlen(s);
    
    
    for(i=0;i<len;i++)
    {
        if(s[i]==ch)
        {
            continue;
        }
        printf("%c",s[i]);
    }
    return 0;
}
