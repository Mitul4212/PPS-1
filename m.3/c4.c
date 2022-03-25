#include<stdio.h>
void main()
{
    int a;
    int last,first,sum=0;
    printf("enter a nuumber:");
    scanf("%d",&a);
    last=a%10;
    printf("last=%d\n",last);
    while(a>=10)
    {
        a=a/10;
        first=a;
    }
    printf("first=%d\n",first);
    sum=first+last;
    printf("sum=%d\n",sum);
}