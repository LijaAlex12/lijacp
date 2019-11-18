#include<stdio.h>
void main(){
int start,a[20],n,sum=0,diff=0,i,x;
printf("enter head position");
scanf("%d",&start);
printf("enter no of locations");
scanf("%d",&n);
printf("enter location values");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
diff=start-a[0];
for(i=0;i<n-1;i++){
x=a[i+1]-a[i];
if(x<0){
sum=sum+(-1*x);
}
else{
sum=sum+x;
}
}
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
printf("%d",sum+diff);
}

