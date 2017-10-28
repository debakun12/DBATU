#include<Stdio.h>
void main(){
printf("Please enter the name of the file:");
char file1[15];
char exten[6]=".txt";
char dataa[100];


FILE *file11;
gets(file1);

strcat(file1,exten);

file11=fopen(file1,"r");

if(file11!=NULL){
printf("\nHey Its here\n");
    fgets(dataa,100,file11);
    printf("%s",dataa);;


}else{
file11=fopen(file1,"w");
}





}
