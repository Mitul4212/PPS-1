#include<stdio.h>
void main()
{
    int i,n,m,tamp=0;
    printf("Enter total number:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Number\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("what number find:");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(a[i]==m)
            tamp=1;
       // else
         //   tamp=0;
    }
    if(tamp==1)
            printf("yes,finded");
        else
            printf("no,not finded");
}