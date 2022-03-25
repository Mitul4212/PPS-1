#include<stdio.h>

void main()
{
    int i,j,n;
    printf("Enter size of pattern:");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=0;j<n;j++){
            if(j>=i)
                printf(" ");
            else
                printf("%d",i);
        }
        printf("\n");
    }
}