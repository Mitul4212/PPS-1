#include<stdio.h>
void shorted(int n,int *p){
    int i,j,t;
    for(i=0;i<n;i++){
        if(*(p+i)<*(p+(i+1))){
            t=*(p+i);
            *(p+i)=*(p+(i+1));
            *(p+(i+1))=t;
        }
    }
    printf("After shorting arry is [");
    for(i=(n-1);i>=0;i--){
        printf(" %d ",*(p+i));
    }
    printf("].");
}
void main(){
    int a[100],i,n;
    printf("Enter arry size:");
    scanf("%d",&n);
    printf("Enter arry Elememt:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    shorted(n,&a);
}