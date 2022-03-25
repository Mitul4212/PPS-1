#include<stdio.h>

void main()
{
    int i,n;
    printf("total studant:");
    scanf("%d",&n);
    int r[n],m[n];
    printf("Enter studant roll no & marks line by line\n");
    for(i=0;i<n;i++){
        scanf("%d   %d",&r[i],&m[i]);
       // scanf("%d",&m[i]);      
    }
    printf("studant roll no & marks\n");
    for(i=0;i<n;i++){
        printf("roll no %d marks is %d\n",r[i],m[i]);
    }
    
}