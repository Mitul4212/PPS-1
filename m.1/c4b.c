#include<stdio.h>

void main()
{
    int a,b,t;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    
    printf("a=%d,b=%d",a,b);
}