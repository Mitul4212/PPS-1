#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    char a[100];
    FILE*ptr1=fopen("test1.txt","r");
    FILE*ptr2=fopen("test2.txt","w");
    while (!(feof(ptr1))){
        fgets(a,100,ptr1);
        fputs(a,ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);
}