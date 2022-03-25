#include<stdio.h>

void main(){
    int a;
    double i,sum=0;
    printf("Enter a Number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum+=1/i;
    }
    printf("Your ans. is %.20lf",sum);
}