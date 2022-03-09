#include<stdio.h>
void main()
{
    int basic,ma=300;
    float hra,pf,da,gross,nt;

    printf("Enter basic: ");
    scanf("%d",&basic);

    da=basic*0.1;
    hra=basic*0.075;
    pf=basic*0.125;
    gross=basic+da+hra+ma;
    nt=gross-pf;

    printf("da=%.2f",da);
    printf("\nhra=%.2f",hra);
    printf("\npf=%.2f",pf);
    printf("\ngross=%.2f",gross);
    printf("\nnt=%.2f",nt);

}