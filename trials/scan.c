#include<stdio.h>

#include<math.h>
void main(){

int temp1=1,temp2=0,qu1[20],qu2[20],temp,head,i,j,a[20],diff=0,n;
qu1[0]=0;
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
qu1[temp1]=head;
for(i=temp1;i>=0;i--)
{
printf("%d\n",qu1[i]);
diff=abs(qu1[i]-qu1[i-1]);
printf("\n\t\t\t\t%d\t\n",diff);
}

for(i=0;i<temp2;i++)
{
printf("%d\n",qu2[i]);
diff=abs(qu2[i]-qu2[i+1]);
printf("\n\t\t\t\t%d\t\n",diff);
}
}

	
