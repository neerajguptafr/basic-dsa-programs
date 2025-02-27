#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter length of first side : \n");
    scanf("%d",&n1);
    printf("enter length of second side : \n");
    scanf("%d",&n2);
    printf("enter length of third side : \n");
    scanf("%d",&n3);
    if (n1==n2&&n1==n3)
    {
        printf("the given triangle is equilateral");
    }
    else if (n1==n2||n1==n3||n2==n3)
    {
        printf("the given triangle is isosceles");
    }
    else
    {
        printf("the given triangle is scalene");
    }
    return 0;
}