#include<stdio.h>

int fibo(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return (fibo(x-1)+fibo(x-2));
}
int main()
{
    int a,b=0;
    printf("Enter fibonacci series eliment:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d",fibo(b));
        b++;
    }
    return 0;
}