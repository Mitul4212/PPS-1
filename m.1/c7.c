#include<stdio.h>

void main()
{
    int f;
    float c;
    printf("enter fahrenheit:");
    scanf("%d",&f);
    c=(f-32)/1.8;
    printf("centigrade=%.2f",c);
}