#include<stdio.h>
void main(){
  int a=1,b,count=0,r;
  printf("enter the range upto which prime numbers are to be printed");
  scanf("%d",&r);
  while(a<=r)
  {

    b=1,count=0;
    while(b<=a)
    {
          if(a%b==0){
            count++;
          }
      b++;


    }
          if(count==2){
            printf("\n%d is prime",a);
          }
      a++;

  }
}
