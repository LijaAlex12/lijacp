#include<stdio.h>
void main(){
  int n,a[100],sum=0,first,second,i;
  printf("enter limit");
  scanf("%d",&n);
  a[0]=0;
  first=a[0];
  a[1]=1;
  second=a[1];
  for(i=2;i<n;i++){
    sum=first+second;
    a[i]=sum;
    first=a[i-1];
    second=a[i];
  }
  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
  }
}
