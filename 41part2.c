#include<stdio.h>
int swap(int p1,int p2){
int temp=p1;
p1=p2;
p2=temp;
printf("A is is %d\n",p1);
printf("B is is %d\n",p2);

}
void main(){
int a;
int b;

printf("Enter A:");
scanf("%d",&a);

printf("Enter B:");
scanf("%d",&b);

swap(a,b);

printf("A as is %d\n",a);
printf("B as is %d",b);


}
