#include<stdio.h>
void main(){
    int switchh = 1;
int no =1;
hey:switch(switchh){
case 1:printf("%d\n",no);
    no++;
       if(no>5){
        goto Done;
       }else{
      goto hey;
       }
}
Done:printf("Done");
}

