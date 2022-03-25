#include<stdio.h>
#include<string.h>
void main()
{
    char a[30],c,d;
    int i,n,tamp;
    printf("enter a string:");
    gets(a);
    printf("enter who character reples by this charecter:\n");
    scanf("%c %c",&c,&d);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]==c){
            a[i]=d;
        }
    }
    printf("after reples charecter string %s\n",a);
}