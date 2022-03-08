#include<stdio.h>
int fact(int x)
{   
    
    if(x==0||x==1)
    return 1;
    else
    return x*fact(x-1);
}
int main()
{
    int a,b;
    printf("Enter No:");
    scanf("%d",&a);
    b=fact(a);
    printf("factorial no for %d = %d",a,b);
    return 0;
}