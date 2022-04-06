#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int i,n,num;
    printf("How many Number enetr:");
    scanf("%d",&n);
    printf("enter %d numbers:\n",n);
    FILE*ptr;
    ptr=fopen("data.txt","w");
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(i>0)
        putw(num,ptr);
    }
    fclose(ptr);
    ptr=fopen("data.txt","r");
    FILE*ptr2=fopen("odd.txt","w");
    FILE*ptr3=fopen("even.txt","w");
    while ((num=getw(ptr))!=(EOF)){
        if(num%2==0)
            putw(num,ptr3);
        else
            putw(num,ptr2);
    }
    fclose(ptr);
    fclose(ptr2);
    fclose(ptr3);
    ptr2=fopen("odd.txt","r");
    ptr3=fopen("even.txt","r");
    printf("\nodd file");
    while ((num=getw(ptr2))!=EOF){
        printf("\n%d",num);
    }
    printf("\neven file");
    while ((num=getw(ptr3))!=EOF){
        printf("\n%d",num);
    }
    fclose(ptr2);
    fclose(ptr3);  
}