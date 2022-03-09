#include<stdio.h>

void main()
{
    int a,b;
    scanf("%d",&a);
    b=a;
    printf("\nprefix incrrement=%d",++a);
    printf("\npostfix incrrement=%d",a++);
    a=b;
    printf("\nprefix decrement=%d",--a);
    printf("\npostfix decrement=%d",a--);
}
