#include<stdio.h>
void main()
{
    int a;
    int f1=0,f2=1,f3;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%d\n",f1);
    printf("%d\n",f2);
    for(int i=0;i<a;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%d\n",f3);
    }
}