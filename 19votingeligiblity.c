#include<stdio.h>
int main()
{
    int n;
    printf("enter age :");
    scanf("%d",&n);
   if (n>=18)
   {
    printf("you are eligible to vote");
   }
   else
   {
    printf("you are not eligible to vote");
   }
   
    return 0;
}