/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// #include<stdlib.h>

void main()
{
    char c;
    int choice,dummy;
    do{
        printf("\n 1.Print Hello\n 2.Print Javapoint\n 3.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Hello");
            break;
            case 2:
            printf("Javapoint");
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("Please enter valid choice");
        }
        printf("\ndo you want to enter more?");
        scanf("%d",&dummy);
        scanf("%c",&c);
        
    }while(c=='y');
    return 0;
}
