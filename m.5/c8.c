#include<stdio.h>
int add(int x)
{
    if(x!=0){
        return (x%10+add(x/10));
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    printf("Enter No:");
    scanf("%d",&a);
    printf("sum of digits %d",add(a));   
}