#include<stdio.h>
int main()
{
    int n1,n2,lcm;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter another number :");
    scanf("%d",&n2);
    int min = n1;
    if (n1>n2){
        min = n2;
    }
    while (1) {
        if (n1 % min == 0 && n2 % min == 0) {
            printf("The gcd of %d and %d is %d.", n1, n2,
                   min);
            break;
        }

        min--;
    }
    return 0;
}