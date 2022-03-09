#include<stdio.h>

void main()
{
    int a,b,mul,add,sub;
    float div;
    printf("Enter a two Number");
    scanf("%d %d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("add=%d\n",add);
    printf("sub=%d\n",sub);
    printf("mul=%d\n",mul);
    printf("div=%f\n",div);
}
