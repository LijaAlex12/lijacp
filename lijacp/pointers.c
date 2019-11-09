//pointers
#include<stdio.h>
void main(){
  char c,*t;
  int a,*f;
  float b,*s;
  t=&c;
  f=&a;
  s=&b;
  printf("enter char,int and float:");
  scanf("%c%d%f",&c,&a,&b);

  printf("\n char at c:%c",*t);
  printf("\n address of c:%d",t);

  printf("\n value of a :%d",*f);
  printf("\n address of a:%d",f);

  printf("\n value of b:%f",*s);
  printf("\n address of b:%d",s);
}
