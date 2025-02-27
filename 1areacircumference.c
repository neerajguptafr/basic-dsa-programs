#include<stdio.h>
int main()
{
    float pi=3.14;
    int r,c,a;
    printf("enter radius :");
    scanf("%d",&r);
    c = 2*pi*r;
    a= pi*r*r;
    printf("circumference of circle : %f",c);
    printf("area of circle : %f",a);
    return 0;
}