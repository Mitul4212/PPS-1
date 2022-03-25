#include<stdio.h>

void main()
{
    int a,i,sum=0;
    printf("Enter a Number:");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        sum+=i*i;
    }
    printf("your ans. is %d",sum);
}