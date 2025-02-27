#include<stdio.h>
int main()
{
    int n,i,j=1;
    printf("enter a number :");
    scanf("%d",&n);
    for ( i = 1; i < 11; i++)
    {
        j=n*i;
        printf("%d * %d = %d \n",n,i,j);
    }
    
   return 0;
}