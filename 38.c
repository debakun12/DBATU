#include<stdio.h>
void main(){
int i=0;
char a='a';
while(i<=4){
if(i==0)
   a='a';
if(i==1)
    a='b';
if(i==2)
    a='c';
if(i==3)
    a='d';
if(i==4)
    a='e';
    while('e'>=a){
        printf("%c",a);
        a++;
    }
    if(i==0)
   a='a';
if(i==1)
    a='b';
if(i==2)
    a='c';
if(i==3)
    a='d';
if(i==4)
    a='e';
int m =i;
while('a'<a){
        while(m!=0){
        printf("%c",a-m);
        m--;
        }
        a--;
    }
    i++;
    printf("\n");
}



}






