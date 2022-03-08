#include<stdio.h>

void swap(int x,int y)
{
    int t;                                                                                                                                                                                              
    t=x;
    x=y;
    y=t;
    printf("a=%d b=%d",x,y);
}
void main()
{
    int a,b;
    printf("Enter a value of a:");
    scanf("%d",&a);
    printf("Enter a value of b:");
    scanf("%d",&b);
    swap(a,b);
}