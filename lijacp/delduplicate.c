#include<stdio.h>
void main(){
  int n,a[20],i,j,y,b[20];
  printf("enter limit");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]==a[j]){
        a[j]=0;
      }
    }
  }
  y=0;
  for(i=0;i<n;i++){
    if(a[i]!=0){
      b[y]=a[i];
      y++;
    }
  }
  for(i=0;i<y;i++){
    printf("%d\t",b[i]);
}
}
