#include<stdio.h>
void main(){
  int a[20],m,n,i,p;
  printf("enter limit");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  m=a[n-1];
  p=a[n-2];
  for(i=n-1;i>0;i--){
    if(i==1){
      a[0]=p;

      a[1]=m;
}
    else{
    a[i]=a[i-2];
  }
  }
  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
  }
}
