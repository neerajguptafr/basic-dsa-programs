#include<stdio.h>
int main()
{
    char c,a,e,i,o,u,A,E,I,O,U;
    printf("enter a CHARACTER :");
    scanf("%c",&c);
   if (c==a||c==e||c==i||c==o||c==u||c==A||c==E||c==I||c==O||c==U)
   {
    printf("character is vowel");
   }
   else
   {
    printf("character is consonant");
   }
   
    return 0;
}