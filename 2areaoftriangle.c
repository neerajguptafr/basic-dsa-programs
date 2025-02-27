#include<stdio.h>
int main()
{
    float area;
    int lob,h;
    printf("enter length of base :");
    scanf("%d",&lob);
    printf("enter length of height perpendicular to base :");
    scanf("%d",&h);
    area = 0.5*lob*h;
    printf("area of triangle is : %f",area);
    return 0;
}