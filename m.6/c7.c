#include<stdio.h>
void main(){
    int i,n,m,*p,*q,t;
    printf("Enter a[n] arry size:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter a[%d] arry Element:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter b[n] arry size:\n");
    scanf("%d",&m);
    int b[m];
    printf("Enter b[%d] arry Element:\n",m);
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    if(n==m){
        for(i=0;i<n;i++){
            p=&a[i];
            q=&b[i];
            t=*p;
            *p=*q;
            *q=t;
            a[i]=*p;
            b[i]=*q;
        }
        printf("arry a[%d] is [",n);
        for(i=0;i<n;i++){
             
            printf("%d",a[i]);
        }
        printf("].\n");
        printf("arry b[%d] is [",m);
         for(i=0;i<m;i++){
            
            printf("%d",b[i]);
        }
        printf("].\n");
    }
    else
        printf("Enter same size of arrys");
}