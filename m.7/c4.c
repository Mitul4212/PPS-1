#include <stdio.h>

struct empl{
    char name[20];
    int age;
    int workexp;
    int salary;
    int comp_projects;
};
int main(){
    int n,i;
    printf("Enter how many employee data read:");
    scanf("%d",&n);
    struct empl e[n];
    printf("Enter employee data\n");
    for(i=0;i<n;i++){
        printf("EMPLOYEE-%d\n",i+1);
        printf("Enter the name of Employee: ");
        scanf("%s",e[i].name);
        printf("Enter the age of Employee: ");
        scanf("%d",&e[i].age);
        printf("Enter total work experience: ");
        scanf("%d",&e[i].workexp);
        printf("Enter total completed projects: ");
        scanf("%d",&e[i].comp_projects);
        printf("Enter the salary given: ");
        scanf("%d",&e[i].salary);
    }
    printf("all %d employee data",n);
    for(i=0;i<n;i++){
        printf("\nDetails of Employee-%d\n",i+1);
        printf("Name                    : %s\n",e[i].name);
        printf("Age                     : %d\n",e[i].age);
        printf("Salary                  : %d Rs\n",e[i].salary);
        printf("Work Experience         : %d Years\n",e[i].workexp);
        printf("Total Completed Projects: %d Projects\n",e[i].comp_projects);
    }
    return 0;
}