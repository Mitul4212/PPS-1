#include<stdio.h>

int add(int x)
{
    if(x!=0){
    return x+add(x-1);
    }
}
int main()
{
    int a,sum;
    printf("Enter Number:");
    scanf("%d",&a);
    sum=add(a);
    printf("first 20 number sum of %d",sum);
    return 0;
}       