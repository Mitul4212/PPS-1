#include<stdio.h>
void main()
{
    int i,n,max=0;
    printf("Enter total number:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Number\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Revers arry");
    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);
    }
}