#include<stdio.h>
struct book{
    char a[30];
    int p;
    int py;
};
int main(){
    int n,i;
    printf("How many Book's data read:");
    scanf("%d",&n);
    struct book b[n];
    for(i=0;i<n;i++){
        printf("Enter book name:\n");
        scanf("%s",b[i].a);
        printf("Enter Book price:\n");
        scanf("%d",&b[i].p);
        printf("Enter Book publish Year:\n");
        scanf("%d",&b[i].py);
    }
    for(i=0;i<n;i++){
        printf("b%d book name is %s\n",i+1,b[i].a);
        printf("b%d book price is %d\n",i+1,b[i].p);
        printf("b%d book publish year is %d\n",i+1,b[i].py);
    }
    return 0;
}