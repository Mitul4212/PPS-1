#include<stdio.h>
void main()
{
    int m;
    printf("Enter marks:");
    scanf("%d",&m);
    if(100>=m&&m>=80){
        printf("distinction");
    }
    else if(79>=m&&m>=60){
        printf("first class");
    }
    else if(59>=m&&m>=40){
        printf("second class");
    }
    else 
        printf("fail");
}