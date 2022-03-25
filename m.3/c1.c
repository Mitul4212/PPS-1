#include<stdio.h>
void main()
{
    int i,a,fact=1;
    printf("Enter a number:");
    scanf("%d",&a);
    i=a;
    while(i>0){
        fact=fact*i;
        i--;
    }
    printf("factorial of %d is %d",a,fact);
    
}