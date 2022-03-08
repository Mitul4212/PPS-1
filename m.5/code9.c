#include<stdio.h>

void upper(char a[26])
{
    int i;
    for(i=0;a[i];i++){
        if(a[i]>96&&a[i]<123)
        {
            a[i]=a[i]-32;
        }
    }
    printf("string %s",a);
}
int main()
{
    char a[26];
    printf("Enter string:");
    scanf("%s",a);
    upper(a);
    return 0;
}
