#include<stdio.h>
int main()
{
    float p,r,t,si;

    printf("enter principal :");
    scanf("%f",&p);
    printf("enter rate :");
    scanf("%f",&r);
    printf("enter time :");
    scanf("%f",&t);
    si = p*r*t;
    printf("simple interest is : %f",si);
    return 0;
}