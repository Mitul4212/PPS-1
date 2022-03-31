#include<stdio.h>
void swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

int main(){
    int a,b;
    printf("Enter two Numbers:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swaping two number 'a'=%d 'b'=%d",a,b);
    
}