#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>='A'&&c<='Z'){
        printf("character is capital Alphabet");
    }    
    else if(c>='a'&&c<='z'){
        printf("character is small Alphabet");
    }
    else if(c>=0&&c<=9){
        printf("character is digit");
    }
    else
        printf("character is special characte");
}