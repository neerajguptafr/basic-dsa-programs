#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,p,q,r,s,t;
    printf("enter amount :");
    scanf("%d",&n);
    a=n/500;
    p=n % 500;
    b=p/100;
    q=p%100;
    c=q/50;
    r=q%50;
    d=r/20;
    s=r%20;
    e=s/10;
    t=s%10;
    f=t;
    printf("there are ");
    printf("%d 500 note , ",a);
    printf("%d 100 note , ",b);
    printf("%d 50 note , ",c);
    printf("%d 20 note , ",d);
    printf("%d 10 note , ",e);
    printf("%d 1 rupees coin.",f);
    return 0;
}