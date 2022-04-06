#include<stdio.h>

void main(){
    char c;
    int count=1;
    FILE*ptr;
    ptr=fopen("test1.txt","r");
    while ((c=fgetc(ptr))!=EOF){
        if(c=='\n')
            count++;
    }
    fclose(ptr);
    printf("Lines is %d",count);
}