#include<stdio.h>

void main()
{
    float area,h,b;
    printf("Enter triangle height and base:");
    scanf("%f %f",&h,&b);
    area=h*(0.5*b);
    printf("area=%.2f",area);
}