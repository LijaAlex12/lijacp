#include<stdio.h>
#include<math.h>
void main(){
int max,n,head,i,j,temp=0,temp1=0,temp2=0,qu1[20],qu2[20],queue[20],diff,seek,a[20];
printf("enter max range");
scanf("%d",&max);
printf("enter curreent head pos");
scanf("%d",&head);
printf("enter limit");
scanf("%d",&n);
printf("enter values");
for(i=1;i<=n;i++){
scanf("%d",&a[i]);
if(a[i]>=head){
qu1[temp1]=a[i];
temp1++;
}
else{
qu2[temp2]=a[i];
temp2++;
}}

	for(i=0;i<temp1-1;i++){
	for(j=i;j<temp1;j++){
	if(qu1[i]>qu1[j]){
	
	temp=qu1[i];
	qu1[i]=qu1[j];
	qu1[j]=temp;
	}
	}
	}

		for(i=0;i<temp1;i++){
		printf("%d\t\n",qu1[i]);
		}

		for(i=0;i<temp2-1;i++){
		for(j=i;j<temp2;j++){
		if(qu2[i]<qu2[j]){
		temp=qu2[i];
		qu2[i]=qu2[j];
		qu2[j]=temp;
		}
		}
		}
for(i=0;i<temp2;i++){
printf("%d\t\n",qu2[i]);
}
for(i=1,j=0;j<temp1;i++,j++)
queue[i]=qu1[j];
queue[i]=max;
for(i=temp1+2,j=0;j<temp2;i++,j++)
queue[i]=qu2[j];
queue[i]=0;
queue[0]=head;
for(j=0;j<=n+1;j++){
diff=abs(queue[j+1]-queue[j]);
seek+=diff;
printf("%d\t%d\t%d\t\n",queue[j],queue[j+1],diff);
}
}














