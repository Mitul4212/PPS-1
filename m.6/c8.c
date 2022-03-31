#include<stdio.h>
void main(){
    int i,n,m;
    printf("Enter arry size:");
    scanf("%d",&n);
    int a[n],*p=a;
    printf("Enter arry Element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter at which index do you want to access:\n");
    scanf("%d",&m);
    if(m<n)
        printf("Element at %d index is %d",m,*(p+m));
    else
        printf("Enter velid Number.\n");
}