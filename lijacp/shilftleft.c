#include<stdio.h>
void main(){
  int a[20],n,i;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int t=a[0];
  for(i=0;i<n;i++){
    if(i==n-1){
      a[i]=t;

    }
    else{
    a[i]=a[i+1];
  }
  }
  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
  }
}
