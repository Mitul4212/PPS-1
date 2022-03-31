#include<stdio.h>

void main()
{
    char c;
    char a[30];
    char *p,*q;
    int n;
    p=&a;
    printf("your charecter address is %p\n",p);
    printf("Enter a string:");
    gets(a);
    n=strlen(a);
    for(int i=0;i<n;i++){
        q=&a[i];
        printf("Your string charecter %c is address is %p\n",a[i],q);
    }
}