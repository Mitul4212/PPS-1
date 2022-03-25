#include<stdio.h>

void main()
{
    int a,i,tamp=0;
    printf("enter a number:");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            tamp=1;
        }
       
    }
    if(tamp==0)
        printf("no is prime");
    else
        printf("no is notprime");
}