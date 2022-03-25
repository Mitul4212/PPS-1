#include<stdio.h>
void main()
{
    int a,sum=0,avg=0;
    printf("enter a number:");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        sum+=i;
    }
    avg=sum/a;
    printf("sum=%d\navg=%d",sum,avg);
}