#include<stdio.h>
void main(){


int word=0;
int space=0;
int characters=0;
char input=0;
word=space+1;
printf("Please Enter The String:\n");

while((input=getchar())!=EOF){

    if(input==' '){
        space++;

    }else{
    characters++;

    }
}
if(characters==0){
    word=0;
    characters=1;
    space=0;

}

printf("No of Characters:%d\n",characters-1);//character also takes in newline
                                           //character therefore we have to subtract 1
printf("No of spaces:%d\n",space);
printf("No of words:%d\n",word);//no of words is basically no of spaces + 1




}
