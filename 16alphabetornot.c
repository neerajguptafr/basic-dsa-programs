#include<stdio.h>
int main()
{
    char c,;
    printf("enter a CHARACTER :");
    scanf("%c",&c);
   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
   {
    printf("character is alphabet");
   }
   else
   {
    printf("character is not an alphabet");
   }
   
    return 0;
}