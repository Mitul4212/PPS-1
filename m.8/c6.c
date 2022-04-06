#include<stdio.h>

void main(){
    char a[100],b[100];
    FILE*ptr1=fopen("test.txt","a");
    FILE*ptr2=fopen("test1.txt","r");
    FILE*ptr3=fopen("test2.txt","r");
    while (!(feof(ptr2))){
        fgets(a,100,ptr2);
        fputs(a,ptr1);
    }
    while (!(feof(ptr3))){
        fgets(b,100,ptr3);
        fputs(b,ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
}