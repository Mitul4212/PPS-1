#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    char a[30];
    FILE*ptr;
    ptr=fopen("test2.txt","r");
    fgets(a,30,ptr);
    fclose(ptr);
    printf("%s",a);
}