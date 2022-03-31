#include<stdio.h>
void main(){
    int i,n,*p,b;
    printf("Enter arry size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter arry Element:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("arry Elements is [");
    for(i=0;i<n;i++){
        p=&a[i];
        b=*p;
        printf(" %d ",b);
    }
    printf("].");
}