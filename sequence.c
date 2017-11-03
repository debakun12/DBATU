#include<stdio.h>
void main(){
//i is the number which will identify with the corresponding array location which is also lenth of array/APence
int i;
printf("Enter the length of the sequence:");
scanf("%d",&i);


float NUM[i];
//AP is the array which will contain the differences between the 2 numbers
int AP[i];
float AP2[i];
//C is an array which will contain the sequence
int c;
printf("Enter the sequence line by line:\n");
for(c=0;c<i;c++){

scanf("%f",&NUM[c]);


}
//seq is a no which will be used for looping
int seq;
printf("Trying for AP:\n");
//will subtract the subsequent numbers 
for(seq=0;seq<i-1;seq++){
AP[seq]=NUM[seq+1]-NUM[seq];
printf("%d\t",AP[seq]);
}
for(seq=0;seq<i-2;seq++){
if(AP[seq]==AP[seq+1]){

}
else{
printf("Not");
break;
}

}
printf(" AP");



//gpp is for geometric progression
float gpp[i];
printf("\n");
printf("Trying for GP:\n");
for(seq=0;seq<i-1;seq++){
gpp[seq]=NUM[seq+1]/NUM[seq];
printf("%f\t",gpp[seq]);
}

for(seq=0;seq<i-2;seq++){
if(gpp[seq]==gpp[seq+1]){

}
else{
printf("Not");
break;
}


}


printf(" GP\n");








}
