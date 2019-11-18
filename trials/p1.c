#include<stdio.h>
#include<string.h>

void main(){
FILE *f1,*f2,*f3,*f4;
int lc,op1,o,sa;
char la[20],m1[20],op[20],otp[20];
f1=fopen("input1.txt","r");
f2=fopen("optab1.txt","r");
f3=fopen("symtab.txt","w");
f4=fopen("output.txt","w");
fscanf(f1,"%s %s %d",la,m1,&op1);
if(strcmp(m1,"START")==0){
lc=op1;
sa=op1;
fprintf(f4,"\n\t%s\t%s\t%d\n",la,m1,op1);
}
else{
lc=0;
}
fscanf(f1,"%s %s",la,m1);
while(!feof(f1)){
fscanf(f1,"%s",op);
fprintf(f4,"\n%d\t%s\t%s\t%s\n",lc,la,m1,op);
if(strcmp(la,"-")!=0){
fprintf(f3,"\n%d %s\n",lc,la);
}
fscanf(f2,"%s %d",otp,&o);	//optab file
while(!feof(f2)){
if(strcmp(m1,otp)==0){
lc=lc+3;
break;
}
fscanf(f2,"%s %d",otp,&o);

}

if(strcmp(m1,"WORD")==0){

lc=lc+3;
}
else if(strcmp(m1,"RESW")==0){
op1=atoi(op);
lc=lc+(3*op1);
}
else if(strcmp(m1,"BYTE")==0){
lc=lc+1;
}
else if(strcmp(m1,"RESB")==0){
op1=atoi(op);
lc=lc+op1;
}
fscanf(f1,"%s %s",la,m1);
}
if(strcmp(m1,"END")==0){
fprintf(f4,"\nprogram length %d",lc-sa);
}
fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
}








