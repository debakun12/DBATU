#include<stdio.h>
int a;
int b;

void increase(a,b){
printf("A is %d\n",a);
printf("B is %d\n",b);
a++;b=9;
}


void main(){
a=2;
b=3;
increase(a,b);
printf("A is %d\n",a);
printf("B is %d\n",b);




}
