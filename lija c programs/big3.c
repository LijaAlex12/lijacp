#include<stdio.h>
void main(){
  int a,b,c;
  printf("enter 3 nos");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
    printf("big %d",a);
  else if(b>c)
    printf("big is\n",b);
  else
    printf("big is %d",c);



}
