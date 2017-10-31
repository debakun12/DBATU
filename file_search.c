#include<stdio.h>
//you must have text files named 0.txt 1.txt ..................32768.txt
//change the datatype to log or double to change size
void main(){
    FILE *fp;
    int i=0;
    char nam[31];
    char dataa[78];
    char search[45];
    printf("Enter The term you want to Search for:");
    gets(search);
for(i=0;i<100;i++){
    itoa(i,nam,10);
    strcat(nam,".txt");
    fp=fopen(nam,"r");
        while(fgets(dataa,1111,fp)!=NULL){
            char *hey;
                if((hey=strstr(dataa,search))!=NULL){
                    printf("File:%s",nam);
            }

        }
}




}





















