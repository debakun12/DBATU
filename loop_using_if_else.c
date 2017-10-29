#include<stdio.h>
void main(){
int i=0;
int output=0;
start:if(i==0){

    printf("%d",output);
    output++;
        if(output>10){
            i=1;
        }else{
            goto start;
        }

    }

printf("End");




}
