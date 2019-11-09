//pointers with array
#include<stdio.h>
void main(){
  int a[20],d,i;
  int *ptr;
  printf("enter no of elements");
  scanf("%d",&d);
  printf("\n enter values");
  for(i=0;i<d;i++){
    scanf("%d",&a[i]);
  }
  ptr=a;
  printf("elements of array\n");
  for(i=0;i<d;i++){
    printf("%d\t",*ptr);
    ptr++;





  }
}
