#include<stdio.h>
void main()
{
    int i,n,m;
    printf("Enter total number:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Number\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter location detlet number\n");
    scanf("%d",&m);
    printf("after remove element in arry\n");
    for(i=0;i<n;i++){
        if(m==i){
            a[m]=a[m+1];
            m++;
            //n-1;
        }
    }
    for(i=0;i<n-1;i++){
        printf("%d\n",a[i]);
    }
}