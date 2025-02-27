#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter first angle :");
    scanf("%d",&n1);
    printf("enter second angle :");
    scanf("%d",&n2);
    printf("enter third angle :");
    scanf("%d",&n3);
    if (n1+n2+n3==180)
    {
        printf("the given angles for a triangle is valid");
    }
    else
    {
        printf("the given triangle is not valid");
    }
    return 0;
}