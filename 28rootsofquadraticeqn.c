#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter coefficient of x^2 :");
    scanf("%d",&a);
    printf("enter coefficient of x :");
    scanf("%d",&b);
    printf("enter coefficient of c :");
    scanf("%d",&c);
    float d=(b*b-4*a*c)^(1/2);
    float r1=(-b+d)/2*a;
    float r2=(-b-d)/2*a;
    printf("root 1 =%f & ",r1);
    printf("root 2 =%f ",r2);
     printf("\n %f ",d);
    return 0;
}