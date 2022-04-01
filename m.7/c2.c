#include<stdio.h>
struct studant{
    char n[30];
    char b[30];
    int t;
};
void main(){
    int a,i;
    printf("How many studant data read:");
    scanf("%d",&a);
    struct studant s[a];
    for(i=0;i<a;i++){
        printf("Enter studant-%d data\n",i+1);
        printf("Enter studant name:\n");
        scanf("%s",s[i].n);
        printf("Enter studant branch:\n");
        scanf("%s",s[i].b);
        printf("Enter studant total mark's:\n");
        scanf("%d",&s[i].t);
    }
    printf("All %d studant data\n",a);
    for(i=0;i<a;i++){
        printf("studant-%d data:\n",i+1);
        printf("Studant name is %s\n",s[i].n);
        printf("studant branch is %s\n",s[i].b);
        printf("studant total mark's is %d",s[i].t);
    }
}