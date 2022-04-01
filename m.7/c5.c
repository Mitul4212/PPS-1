#include<stdio.h>

union abc{
  int a;
  char b;
  double c;
};
int main(){
  union abc var;
  var.a=68;
  var.b='A';
  var.c=3467.3476;
  printf("var=%d\n",sizeof(var));
  printf("a=%d\n",var.a);
  printf("b=%c\n",var.b);
  printf("c=%f\n",var.c);
  return 0;
}