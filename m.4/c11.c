//using inbuilt function


#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    printf("enter a string:");
    gets(a);
    printf("after revers string is %s",strrev(a));
}

//without using inbuild function

#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    int i,n;
    printf("enter a string:");
    gets(a);
    n=strlen(a);
    printf("revers string is ");
    for(i=n;i>=0;i--){
        printf("%c",a[i]);
    }
}