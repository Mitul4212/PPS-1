#include<stdio.h>

void main()
{
    int km,meter,cm;
    float feet,inch;
    printf("Enter KM:");
    scanf("%d",&km);
    meter=km*1000;
    cm-=km*100000;
    feet=km*3280.84;
    inch=km*39370.1;
    printf("\nmeter=%d",meter);
    printf("\ncm=%d",cm);
    printf("\nfeet=%f",feet);
    printf("\ninch=%f",inch);

}