#include<stdio.h>

void main()
{
    int i,j,n,k=1;
    printf("Enter size of pattern:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n,k=1;j>0;j--){
            if(j<=i)
                printf(" ");
            else
                printf("%d",k++);
        }
        printf("\n");
    }
}