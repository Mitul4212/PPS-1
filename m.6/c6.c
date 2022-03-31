#include<stdio.h>
void main(){
    int i,n,*p;
    printf("Enter arry size:\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter arry Element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Arry a[%d] is {[",n);
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("].\n");
    printf("after copy arry element in b[%d] arry is [",n);
    for(i=0;i<n;i++){
        p=&a[i];
        b[i]=*p;
        printf(" %d ",b[i]);
    }
    printf("].");
}