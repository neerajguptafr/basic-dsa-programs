#include<stdio.h>
int main()
{
    float maths , science , english, hindi, gk , percentage;

    printf("enter marks of maths:");
    scanf("%f",&maths);
    printf("enter marks of science:");
    scanf("%f",&science);
    printf("enter marks of engish:");
    scanf("%f",&english);
    printf("enter marks of hindi:");
    scanf("%f",&hindi);
    printf("enter marks of gk:");
    scanf("%f",&gk);
    percentage = (maths + science+english+hindi+gk)/5;
    printf("percentage : %f",percentage);
    return 0;
}