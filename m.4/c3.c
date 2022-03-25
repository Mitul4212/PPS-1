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
    for(i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("max number is %d",max);
}