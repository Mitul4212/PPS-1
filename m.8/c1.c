#include<stdio.h>


int main(){
    FILE*fptr;
    fptr=fopen("test1.txt","w");
    char a[30];
    gets(a);
    fputs(a,fptr);
    fclose(fptr);
    return 0;
}