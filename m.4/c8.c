#include<stdio.h>
#include<string.h>
void main()
{
    char a[30],c;
    int i,n,tamp;
    printf("enter a string:");
    gets(a);
    printf("enter who character find:\n");
    scanf("%c",&c);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]==c)
            tamp=1;
    }
    if(tamp==1)
        printf("Yes,finded\n");
    else
        printf("no,not finded\n");
}