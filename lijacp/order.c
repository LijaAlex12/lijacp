#include<stdio.h>
void main(){
  int i=0,b[20],j,k,a,n,temp;
  printf("enter any number");
  scanf("%d",&n);
  while(n>0){
    a=n%10;
    b[i]=a;
    n=n/10;
    i++;
  }

  for(k=0;k<i;k++)
  {
      for(j=k+1;j<i;j++)
      {
        if(b[j]<b[k])
        {
          temp=b[k];
          b[k]=b[j];
          b[j]=temp;
        }
      }
}

for(k=0;k<i;k++){
  printf("%d",b[k]);
}
}
