#include<stdio.h>
int main()
{
    int n1,n2,lcm;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter another number :");
    scanf("%d",&n2);
    int max = n1;
    if (n1<n2){
        max = n2;
    }
    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2,
                   max);
            break;
        }

        ++max;
    }
    return 0;
}