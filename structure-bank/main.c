/******************************************************************************

  Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/         
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer{
    char name[50];
    int age;
    char place[50];
    char phone[10];
    float amt;
    int code;
};


int main()
{
    struct customer c[50];
    int ch,no,no1,no2,j,val=0,val1=0,val2=0,depamt,wiamt,temp=0,nc,d=0,e=0,l1=0,k,o,l2,q,i=0,w;
    char p[100],p1[100];
    // static int i;
    
    maain:
    printf("Menu: \n1.CREATE ACCOUNT\n2.DISPLAY ACCOUNT DETAILS\n3.DEPOSIT\n4.WITHDRAWAL\n5.EXIT\n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
            // create();
            
            printf("Enter Your name: ");
            scanf("%s",c[i].name);
            printf("age: ");
            scanf("%d",&c[i].age);
            printf("place: ");
            scanf("%s",c[i].place);
            printf("phone: ");
            scanf("%s",c[i].phone);
            printf("Initial amount: ");
            scanf("%f",&c[i].amt);
            printf("Enter your 4 digit code: ");
            scanf("%d",&c[i].code);
            for(j=0;j<50;j++)
            {
                if(j!=i&&c[j].code==c[i].code){
                    printf("already exits.\nPlease try a new code.");
                    scanf("%d",&nc);
                    c[i].code=nc;
                }
            }
            printf("\n");
            
            
            i=i+1;
            goto maain;
            
            break;
        
        case 2:
            //display
            printf("Enter your code: ");
            scanf("%d",&no);
            for(i=0;i<50;i++)
            {
                if(no==c[i].code)
                {
                    val=i;
                    break;
                }
            }
            
                printf("Name: %s\n",c[i].name);
                printf("age: %d\n",c[i].age);
                printf("place: %s\n",c[i].place);
                printf("phone: %s\n",c[i].phone);
                printf("Account Balance: %f\n",c[i].amt);
                
                goto maain;
            
            break;
        
        case 3:
            // deposit();
            printf("Enter your code: ");
            scanf("%d",&no1);
            for(i=0;i<50;i++){
                if(no1==c[i].code){
                    printf("User name: %s\n",c[i].name);
                    d=1;
                }
                
            }
            if(d==0){
                printf("Invalid code\n");
            }
            else{
            printf("Enter the amount to deposit: ");
            scanf("%d",&depamt);
            for(i=0;i<50;i++)
            {
                if(no1==c[i].code)
                {
                    val1=i;
                    c[i].amt=c[i].amt+depamt;
                }
            }
            printf("Balance= %f\n",c[val1].amt);
            
            }
            goto maain;
            break;
        
        case 4:
            // withdraw();
            printf("Enter your code: ");
            scanf("%d",&no2);
            for(j=0;j<50;j++){
                if(no2==c[j].code){
                    printf("User name: %s",c[j].name);
                    e=1;
                }
                
            }
            if(e==0){
                printf("Invalid code\n");
            }
            else
            {
            printf("Enter the amount to withdraw: ");
            scanf("%d",&wiamt);
            if(wiamt<=0){
                printf("Invalid!\nEnter a valid amount: ");
                scanf("%d",&w);
                wiamt=w;
            }
            for(i=0;i<50;i++)
            {
                if(no2==c[i].code)
                {
                    if(c[i].amt>wiamt)
                    {
                        val2=i;
                        c[i].amt=c[i].amt-wiamt;
                    }
                    else{
                        printf("Insufficient Balance\n");
                    }
                }
            }
            printf("Balance= %f\n",c[val2].amt);
            }
            goto maain;
            break;
            
        case 5:
            exit(0);
            
        default:
            printf("Invalid choice!");
    }
    
    return 0;
}
