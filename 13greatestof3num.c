#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter another number :");
    scanf("%d",&n2);
    printf("enter another number :");
    scanf("%d",&n3);
    int max;
    if (n2>n1&&n2>n3)
    {
        max=n2;
    }
    else if (n3>n1)
    {
        max=n3;
    }
    else
    {
        max=n1;
    }
    printf("greatest number is : %d",max);
    
    return 0;
}