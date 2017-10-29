#include<stdio.h>
void main(){

struct{
     int date;//4 bytes
     int year;//4 bytes
     char month[21];//21 bytes

}today;
printf("%d",sizeof(today));




}
