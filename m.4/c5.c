#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter total number:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Number\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum of all elements in arry %d",sum);
}