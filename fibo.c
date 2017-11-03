#include<stdio.h>
void main(){
int i;
int p;
int q;
printf("Enter i:");
scanf("%d",&i);
i=i+1;
int fibo[i];
fibo[0]=1;
fibo[1]=1;

printf("1\n");
for(p=2;p<i;p++){
fibo[p]=0;
 for(q=p-1;q>0;q--){
  fibo[p]=fibo[p]+fibo[q-1];
  
}
  printf("%d\n",fibo[p]);
}









}
