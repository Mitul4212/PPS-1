#include<stdio.h>

int add(int *x,int *y){
    int *sum;
    *sum=*x+*y;
    return *sum;
}
void main()
{
    int a,b;
    printf("Enter two Number:");
    scanf("%d %d",&a,&b);
    printf("Sum of two Number is %d.",add(&a,&b));
}