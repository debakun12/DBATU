#include<stdio.h>
void main(){
double no;
srand (time(NULL));
printf("Enter the length of the random number you want:");
scanf("%lf",&no);
while(0<no){
int m=rand()%10;
printf("%d",m);
no--;
}



}
