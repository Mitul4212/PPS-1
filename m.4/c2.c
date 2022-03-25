#include<stdio.h>

void main()
{
    int i,n;
    printf("Enter total number:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Number");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Final Ans");
    for(i=0;i<n;i++){
        if(a[i]%2==0)
            printf("No is even");
        else
            printf("No is odd");
    }
}