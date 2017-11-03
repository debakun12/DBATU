//created by dk12
#include<stdio.h>
void main(){

int dividend;
int divisor;
//the first loop is to set the dividend. Every time loop is executed dividend is descreased by 1
for(dividend=100;dividend>0;dividend--){
//the second loop is to set the divisor. Every time the loop is run it the divisor divides the dividend
//Every time the loop is run the dividend is decreased by 1
  for(divisor=2;divisor<dividend;divisor++){
//If the remainder comes out to be 0 go back to loop 2 or else print number 
      if(dividend%divisor==0){
//Go back to loop 2     
      break;
      }
      printf("%d\n",dividend);
//Go back to loop 2      
      break;

  
}
    
}





}
