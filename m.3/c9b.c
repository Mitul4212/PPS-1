#include<stdio.h>

void main()
{
    int i,j,n;
    printf("Enter size of pattern:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n;j>=0;j--){
            if(j<=i)
                printf(" *");
            else
                printf(" ");
        }
        printf("\n");
    }
}