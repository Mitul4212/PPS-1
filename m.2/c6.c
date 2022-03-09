#include<stdio.h>
void main()
{
    int a;
    printf("Enter number between 1 to 7:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:printf("sunday\n");
        break;
    case 2:printf("monday\n");
        break;
    case 3:printf("Tuesday\n");
        break;
    case 4:printf("Wednesday\n");
        break;
    case 5:printf("Thursday\n");
        break;
    case 6:printf("friday\n");
        break;
    case 7:printf("Saturday\n");
        break;
    default:printf("none\n");
        break;
    }
}