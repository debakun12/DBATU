#include<Stdio.h>
void main(){
FILE *fp;
int no;
char paragraph[1000];
char input[100];
char heading[100];
char subheading[100];
if(fp=fopen("Abc.html","a")==NULL){
    fp=fopen("Abc.html","w");
}
fp=fopen("Abc.html","a");
switch(1){

case 1:printf("Enter Heading:");
        gets(heading);
        fprintf(fp,"%s%s%s","<h1 align=center>",heading,"</h1>");
case 2:printf("Enter Subheading:");
          gets(subheading);
fprintf(fp,"%s%s%s","<h5 align=center>",subheading,"</h5>");
case 3:printf("Enter The paragraph:");
       fprintf(fp,"<p align=center>");
       while(gets(input)!='\0'){

           fprintf(fp,"%s",input);
       }
fprintf(fp,"</p>");

}

}
