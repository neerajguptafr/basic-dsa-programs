#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
   if (n==2)
   {
    printf("this month has 28 or 29 days");
   }
   else if (n==4||n==6||n==9||n==11)
   {
    printf("this month has 30 days");
   }
   else
   {
    printf("this month has 31 days");
   }
   
   
    return 0;
}