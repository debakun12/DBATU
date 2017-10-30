#include<stdio.h>
void main(){

int n=0;
char m;
while(m=getchar()!=EOF){
if(m=='\n')
    n=n+1;

printf(" %d\n",n);
}
printf(" %d",n);
}
//this program dosen't work because != has higher precedence than =
// so if u wrap m=getchar() in () it will work as intended
