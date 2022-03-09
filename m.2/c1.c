#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
        printf("number is +ve");
    else if(a<0)
        printf("number is -ve");
    else
        printf("number is zero");

}