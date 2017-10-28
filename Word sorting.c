#include<stdio.h>
void main(){
char word[12]={'s','d','f','g','e','r','s','s','w','q','d','f'};
int i=0;
int j=0;
char temp;
while(i<13){
        j=0;
while(j<13){
if(word[i]<word[j]){
        temp = word[i];
        word[i]=word[j];
        word[j]=temp;
        }
j++;
}
i++;
}
printf("%s",word);
}






