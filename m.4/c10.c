#include<stdio.h>
#include<string.h>
void main()
{
    char a[30],c;
    int i,n,t;
    printf("enter a string:");
    gets(a);
    printf("enter who character is delete:\n");
    scanf("%c",&c);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]==c){
            for(t=i;t<n;t++){
                a[t]=a[t+1];
                
            }
        }
    }
    printf("string after deleted charecter is %s",a);
}