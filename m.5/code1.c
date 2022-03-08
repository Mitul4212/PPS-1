#include<stdio.h>

void add(int x)
{
    int i,sum=0;
    for(i=1;i<=x;i++)
    {
        sum=sum+i;
    }
    printf("sum of all Number is %d",sum);
}

int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    add(a);
    return 0;
}