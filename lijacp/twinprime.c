#include<stdio.h>
void main(){
  int r,count,i,j,x=0,a[20];
  printf("enter range");
  scanf("%d",&r);
  i=2;
  while(i<r){
    count=0;
    for(j=1;j<=i;j++){
      if(i%j==0){
        count++;

      }

    }

    if(count==2){
      //printf("prime %d",i);
      a[x]=i;
      x++;
    }
    i++;
  }
  for(i=0;i<x;i++){
    if(a[i+1]-a[i]==2){
      printf("\n%d and %d are twin prime",a[i],a[i+1]);
    }
  }
}
