/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct vehicle {
    char oname[100];
    char mname[100];
    int tyres;
    char vname[100];
};

int main()
{
    struct vehicle v[100];
    int i=0,n,j,ch,a=0,b=0,c=0,w;
    
    top:
    printf("Menu\n1.CREATE\n2.DISPLAY\n3.EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
            printf("Enter Owners Name: ");
            scanf("%s",v[i].oname);
            printf("Enter Vechiles Name: ");
            scanf("%s",v[i].vname);
            printf("Enter Model of your vehicle: ");
            scanf("%s",v[i].mname);
            printf("Enter the number of tyres of your vehicle: ");
            scanf("%d",&v[i].tyres);
            if(v[i].tyres>4||v[i].tyres<2)
            {
                c:
                printf("Invalid number of tyres!\n");
                printf("Enter a valid number: ");
                scanf("%d",&w);
                if(w>4||w<2){
                    goto c;
                }
                v[i].tyres=w;
            }
            i=i+1;
            printf("\n");
            goto top;
            
        case 2:
            d:
            printf("1.2 tyres\n2.3 tyres\n3.4 tyres\n4.Exit\n");
            printf("Enter the number of tyres:\n");
            scanf("%d",&n);
            
            if(n==1)
            {
                for(j=0;j<100;j++)
                {
                    if(v[j].tyres==2)
                    {
                        printf("Owner name: %s\n",v[j].oname);
                        printf("vehicle name: %s\n",v[j].vname);
                        printf("Model : %s\n\n",v[j].mname);
                        a=1;
                    }
                }
                if(a==0)
                {
                    printf("2 tyre Vechiles are Not registered.");
                }
            }
            else if(n==2)
            {
                for(j=0;j<100;j++)
                {
                    if(v[j].tyres==3)
                    {
                        printf("Owner name: %s\n",v[j].oname);
                        printf("vehicle name: %s\n",v[j].vname);
                        printf("Model : %s\n\n",v[j].mname);
                        b=1;
                    }
                }
                if(b==0)
                {
                    printf("3 tyre Vechiles are Not registered.");
                }
            }
            else if(n==3)
            {
                for(j=0;j<100;j++)
                {
                    if(v[j].tyres==4)
                    {
                        printf("Owner name: %s\n",v[j].oname);
                        printf("vehicle name: %s\n",v[j].vname);
                        printf("Model : %s\n\n",v[j].mname);
                        c=1;
                    }
                }
                if(c==0)
                {
                    printf("4 tyre Vechiles are Not registered.");
                }
            }
            else if(n==4)
            {
                goto top;
            }
            else
            {
              printf("Invalid\n"); 
            }
            printf("\n");
            goto d;
            
        case 3:
            exit(0);
        
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}



