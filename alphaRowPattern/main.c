/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n=5,a;
    for(i=0;i<n;i++)
    {
        a=i;
        if(i==0)
            printf("A\n");
        else if(i==1)
            {
                while(a<=2){
                    printf("B ");
                    a++;
                }
                printf("\n");
            }
        else if(i==2)
            {
                while(a<=4){
                    printf("C ");
                    a++;
                }
                printf("\n");
            }
        else if(i==3)
            {
                while(a<=6){
                    printf("D ");
                    a++;
                }
                printf("\n");
            }
        else
            {
                while(a<=8){
                    printf("E ");
                    a++;
                }
                printf("\n");
            }
    }
    return 0;
}

