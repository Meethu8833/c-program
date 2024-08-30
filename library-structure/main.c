/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct book{
    char b_name[100];
    char a_name[100];
    float price;
};

struct usertable{
    char user[100];
    int age;
    char place[100];
    char uname[100];
    char pass[100];
};

int main()
{
    struct book b[100];
    struct usertable u[100];
    char arr[2][10]={"meethu","1234"};
    char uname[10],pass[10],bname[100],uname1[100],pass1[100],bk[100],db[100];
    int ch,ch1,ch2,ch3,i=0,k=0,j,l,l2,l3,l4,l5,flag=0,flag1=0,flag2=0,f=0,f1=0,f2=0,f3=0;
    float nprice;
//printing the string array
    // for(int i=0;i<2;i++){
    //     printf("%s\n",arr[i]);
    // }
    c:
    printf("\n*******MAIN MENU*******\n");
    printf("1.ADMIN\n2.USER\n3.EXIT\n");
    printf("Select any option: ");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
            printf("\n*****ADMIN PAGE*****\n");
            a:
            printf("Enter Username: ");
            scanf("%s",uname);
            printf("Enter your password: ");
            scanf("%s",pass);
            
            if(strcmp(arr[0],uname)==0&&strcmp(arr[1],pass)==0){
                // printf("True");
              b:
                printf("\n***ADMIN MENU***\n");
                printf("1.Add Book\n2.Display Books\n3.Update Book\n4.Delete Book\n5.Exit\n");
                printf("Enter your choice: ");
                scanf("%d",&ch1);
                
                switch(ch1)
                {
                    case 1:
                        f=0;
                        printf("\n**ADD BOOK**\n");
                        printf("Enter the name of book:");
                        scanf("%s",b[i].b_name);
                        // fgets(b[i].name,100,stdin);
                        l=strlen(b[i].b_name);
                        // printf("length is: %d",l);
                        for(j=0;j<l;j++)
                        {
                            b[i].b_name[j]=toupper(b[i].b_name[j]);
                        }
                        for(j=0;j<i;j++)
                        {
                            if(strcmp(b[i].b_name,b[j].b_name)==0)
                            {
                                f=1;
                            }
                        }
                        if(f==1){
                            printf("Already Exists!\n");
                            // goto b;
                        }
                        else{
                        
                        // printf("%s", b[i].b_name);
                        printf("Enter the author's name: ");
                        scanf("%s",b[i].a_name);
                        printf("Enter the price: ");
                        p:
                        scanf("%f",&b[i].price);
                        
                        if(b[i].price<0){
                            
                            printf("Enter a valid price: \n");
                            goto p;
                        }

                        printf("__________Added Successfully__________\n");
                        i=i+1;
                        
                        }
                        goto b;
                    case 2:
                        printf("\n**DISPLAY BOOKS**\n");
                        // printf("%d",i);
                        if(i==0)
                        {
                            printf("No books to Display!\n");
                        }
                        for(j=0;j<i;j++)
                        {
                            printf("%d.%s\n",j+1,b[j].b_name);
                            printf("%s\n",b[j].a_name);
                            printf("%f\n\n",b[j].price);
                        }
                        printf("\n");
                        goto b;
                        // printf("%s",b[0].b_name);
                        
                    case 3:
                        printf("\n**UPDATE BOOK PRICE**\n");
                        if(i==0)
                        {
                            printf("No books available!\n");
                        }
                        else
                        {
                            printf("Enter the name of book: ");
                            scanf("%s",bname);
                            l2=strlen(bname);
                            for(j=0;j<l2;j++)
                            {
                                bname[j]=toupper(bname[j]);
                            }
                            // printf("%s\n",bname);
                            
                            
                            for(j=0;j<100;j++)
                            {
                                if(strcmp(bname,b[j].b_name)==0)
                                {
                                    // printf("finded\n");
                                    f2=1;
                                    printf("The old price of the book \"%s\" is %f \n",b[j].b_name,b[j].price);
                                    printf("Enter the new price: ");
                                    p1:
                                    scanf("%f",&b[j].price);
                                    if(b[j].price<0){
                                        printf("Enter a valid price: ");
                                        goto p1;
                                    }
                                    // b[i].price=nprice;
                                    // printf("new price: %f\n",b[j].price);
                                }
                            }
                            if(f2==0){
                                printf("The book is not available\n");
                            }
                            
                        }
                        goto b; 
                     
                    case 4:
                        printf("\n**DELETE BOOK**\n");
                        if(i==0)
                        {
                            printf("No books available!\n");
                        }
                        else
                        {
                            printf("Enter the name of the book to delete: ");
                            scanf("%s",db);
                            l4=strlen(db);
                            for(int m=0;m<l4;m++){
                                db[m]=toupper(db[m]);
                            }
                            for(int m=0;m<i;m++){
                                if(strcmp(db,b[m].b_name)==0)
                                {
                                    flag2=1;
                                    for(j=m;j<i;j++){
                                        b[j]=b[j+1];
                                    }
                                    i=i-1;
                                }
                            }
                            if(flag2==0)
                            {
                                printf("The book is not available.\n");
                            }
                        }
                            goto b;
                    case 5:
                        goto c;
                            
                    default:
                            printf("Invalid choice!\n");
                            
                        
                        goto b;
                        
                }
            }
            else{
                printf("Invalid Username or Password!\n");
                printf("Try again\n");
                goto a;
            }
            
        case 2:
        u:
            printf("\n***** USER *****\n");
            printf("1.Registration\n2.Login\n3.Exit\n");
            printf("Enter your choice: ");
            scanf("%d",&ch2);
            
            switch(ch2)
            {
                case 1:
                    printf("\n***USER REGISTRATION***\n");
                    printf("Enter Your name: ");
                    scanf("%s",u[k].user);
                    printf("Age: ");
                    age:
                    scanf("%d",&u[k].age);
                    if(u[k].age<=0){
                        printf("Enter a valid age: ");
                        goto age;
                    }
                    printf("Place: ");
                    scanf("%s",u[k].place);
                    printf("Username: ");
                    g:
                    f1=0;
                    scanf("%s",u[k].uname);
                    for(j=0;j<k;j++)
                    {
                        if(strcmp(u[k].uname,u[j].uname)==0){
                            f1=1;
                        }
                    }
                    if(f1==1){
                        printf("Username already exists!\n");
                        printf("Try another username: ");
                        goto g;
                    }
                    
                    printf("Password: ");
                    scanf("%s",u[k].pass);
                    printf("___Registration Successful___\n");
                    k=k+1;
                    goto u;
                    
                case 2:
                    //printing users list
                    
                    // for(j=0;j<k;j++)
                    // {
                    //     printf("%d. %s",j+1,u[j].user);
                    // }
                    // goto u;
                    printf("\n***USER LOGIN***\n");
                    printf("Enter Username: ");
                    scanf("%s",uname1);
                    printf("Enter your password: ");
                    scanf("%s",pass1);
                    
                    for(j=0;j<=k;j++)
                    {
                        // printf("uname : %s\n",u[j].user);
                        if(strcmp(u[j].uname,uname1)==0 && strcmp(u[j].pass,pass1)==0)
                        {
                            // printf("HI\n\n");
                            flag=1;
                            user:
                            printf("\n1.Display all Books available\n2.Search Book\n3.Exit\n");
                            printf("Enter your choice: ");
                            scanf("%d",&ch3);
                            
                            switch(ch3)
                            {
                                case 1:
                                    if(i==0){
                                        printf("No books available!\n");
                                    }
                                    else{
                                    printf("All books available: \n");
                                    for(int m=0;m<i;m++)
                                    {
                                        printf("%d.%s\n",m+1,b[m].b_name);
                                        // printf("Author name: %s\n",b[m].a_name);
                                        // printf("Price: %f\n\n",b[m].price);
                                    }
                                    }
                                    goto user;
                                    
                                case 2:
                                    printf("Enter the name of book to Search: ");
                                    scanf("%s",bk);
                                    l3=strlen(bk);
                                    for(int m=0;m<l3;m++){
                                        bk[m]=toupper(bk[m]);
                                    }
                                    
                                    for(int m=0;m<i;m++)
                                    {
                                        if(strcmp(bk,b[m].b_name)==0)
                                        {
                                            flag1=1;
                                            printf("Details of the book \"%s\"\n",b[m].b_name);
                                            printf("Author name: %s\n",b[m].a_name);
                                            printf("Price: %f\n",b[m].price);
                                        }
                                    }
                                    if(flag1==0){
                                        printf("Book not found!\n");
                                    }
                                    goto user;
                                    
                                case 3:
                                    goto u;
                                    
                                default:
                                    printf("Invalid Choice!\n");
                                    goto user;
                            }
                        }
                        
                    }
                    if(flag==0){
                        printf("No user found!\n");
                    }
                    goto u;
                case 3:
                    goto c;
            }
         
        case 3:
            exit(0);
        
    }
    return 0;
}