#include<stdio.h>
void main(){
int a,b,ch;

  printf("enter two numbers ");
  scanf("%d%d",&a,&b);
  while(1){
  printf("enter case");
  scanf("%d",&ch);

  switch(ch){
    case 1:
    printf("sum is %d",a+b);
    break;
    case 2:
    printf("difference is %d",a-b);
    break;
    case 3:
    printf("product is %d",a*b);
    break;
    case 4:
    printf("quotient is %d",a/b);
    break;

}

  }
  }
