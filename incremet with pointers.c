
//Hey this one apparently works XD
#include<stdio.h>
int a;
int b;

void increase(pa,pb){
printf("A is %d\n",a);
printf("B is %d\n",b);
pa=a++;
pb=b++;
}


void main(){
a=2;
b=3;
int *pa;
int *pb;
pa=&a;
pb=&b;
increase(*pa,*pb);
printf("A is %d\n",a);
printf("B is %d\n",b);

}
