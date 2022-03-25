//using inbuilt function

/*#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    printf("enter a string:");
    gets(a);
    printf("your string in upper case is %s",strupr(a));
}*/

//without using inbuild function

#include<stdio.h>
#include<string.h>
void main()
{
    char a[30],c,d;
    int i,n,tamp;
    printf("enter a string:");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]>='a' && 'z'>=a[i]){
            a[i]-=32;
        }
    }
    printf("upper case string %s",a);
}