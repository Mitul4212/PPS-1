#include<stdio.h>

void prime(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        {
            break;
        }
    }    
        if(i==x)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
}
void main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    prime(a);
}