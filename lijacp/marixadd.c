#include<stdio.h>
void main(){
  int a[20][20],b[20][20],r1,r2,c1,c2,i,j;
  printf("enter nof rows & colsof mat 1,2");
  scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
  if(r1==r2 && c1==c2){


  printf("enter elements of mat 1 ");
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("enter elements of mat 2 ");
  for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
      printf("%d\t",a[i][j]+b[i][j]);
    }printf("\n");
  }
}
else{
  printf("matrices can't be added");
}
}
