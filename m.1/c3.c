#include<stdio.h>

void main()
{
    int p,y;
    float sp,r;
    printf("Enter a Principal amount,Rate of interest,Number of years :");
    scanf("%d %f %d",&p,&r,&y);
    sp=(p*r*y)/100;
    printf("Simple interest is = %f",sp);
}