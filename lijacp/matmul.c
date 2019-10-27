#include<stdio.h>
void main(){
  int a[20][20],b[20][20],c[20][20],r1,r2,c1,c2,i,j,k;
  printf("enter nof rows & colsof mat 1,2");
  scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
  if(c1==r2){


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
    for(j=0;j<c2;j++){
      c[i][j]=0;
      for(k=0;k<r2;k++){
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }
    }
  }
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
      printf("%d\t",c[i][j]);
    }printf("\n");
  }
}
else{
  printf("multiplication not possible");
}
}
