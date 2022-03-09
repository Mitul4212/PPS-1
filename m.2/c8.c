#include<stdio.h>
void main()
{
    int a,r;
    printf("Enter a number:");
    scanf("%d",&a);
    r=a%10;
    printf("%d",r);
    if(r%2==0)
        printf("even");
    else
        printf("odd");
}