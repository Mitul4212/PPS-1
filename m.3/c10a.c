#include<stdio.h>

void main()
{
    int i,j,n;
    printf("Enter size of pattern:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<=i)
                printf("%d",j+1);
            else
                printf(" ");
        }
        printf("\n");
    }
}