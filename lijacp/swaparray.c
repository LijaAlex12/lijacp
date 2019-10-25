#include<stdio.h>
void main(){
  int a[20],b[20],i,n,m;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter elements of 'a' array");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("enter elements of 'b' array");
  for(i=0;i<n;i++){
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++){
    m=a[i];
    a[i]=b[i];
    b[i]=m;
  }
  for(i=0;i<n;i++){
    printf("array a \t%d\t",a[i]);
  }
  for(i=0;i<n;i++){
    printf("array b %d\t",b[i]);
  }
}
