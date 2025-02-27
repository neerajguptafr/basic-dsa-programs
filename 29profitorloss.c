#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter cost price :");
    scanf("%d",&n1);
    printf("enter selling price :");
    scanf("%d",&n2);
    if (n2>=n1)
    {
        printf("profit is %d",n2-n1);
    }
    else
    {
        printf("loss is %d",n1-n2);
    }
    
    return 0;
}