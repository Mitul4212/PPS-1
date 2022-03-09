#include<stdio.h>
void main()
{
    int n=10;
    int a,max=0;
    while (n!=0)
    {
        scanf("%d",&a);
        if(a>max)
            max=a;
        n--;
    }
    printf("max number is %d",max);
}