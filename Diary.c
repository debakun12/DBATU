#include<stdio.h>
void instr(){
printf("Enter r to read your diary.\n");
printf("Enter w to write to your diary.\n");
printf("Enter d to delete your diary.\n");

}





int safe;
void main(){
FILE *fp;
char user;
instr();
scanf("%c",&user);
fflush(stdin);
char wordss[1222];
if(user=='r'){
fp=fopen("Diary.txt","r");
while(fgets(wordss,1111,fp)!=NULL){
puts(wordss);
}
}
else if(user=='w'){
    printf("Enter Your Entry:");
    gets(wordss);
fp=fopen("Diary.txt","a");

fprintf(fp,"\n%s"">>""%s"">>""%s",__DATE__,__TIME__,wordss);
}
else if(user=='d'){
        char confirm;
        printf("Do you Really want to Delete Your Diary?\n");
        printf("Enter y to delete and n to not delete\n");
        scanf(" %c",&confirm);
        if(confirm=='y'){
           goto Deletee;
        }
        else{
            goto Safe;
        }

        Deletee:printf("Deleting Diary..........\n");
    fp=fopen("Diary.txt","w");

fprintf(fp,"");
printf("Diary Deleted Successfully!");
}
Safe:printf("\n");
if(safe==1){
    printf("File is safe!");
}
}
