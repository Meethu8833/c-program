#include <stdio.h>
#include <math.h>

void quadratic(float a,float b,float d)
{
    float root1,root2;
    if(d>0){
        root1=((-b)+sqrt(d))/(2*a);
        root2=((-b)-sqrt(d))/(2*a);
        printf("roots are: %.1f, %.1f",root1,root2);
    }
    else if(d==0){
        root1=root2=(-b)/(2*a);
        printf("roots are: %.1f, %.1f",root1,root2);
    }
    else{
        root1=(-b)/(2*a);
        printf("root is : %.0f + %.0fi, %.0f - %.0fi",root1,d,root1,d);
    }
    
}
int main()
{
    float a,b,c,d;
    printf("Quadratic equation : ax^2 + bx + c:\n");
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    
    d=((b*b)-(4*a*c));
    quadratic(a,b,d);
    return 0;
}