#include<stdio.h>


void info(){
printf("Enter 1 to give heading \n");
printf("Enter 2 to give subheading\n");
printf("Enter 3 to give color of background\n");
printf("Enter 4 to enter content \n");
printf("Enter 5 to give background image\n");
printf("Enter 0 to Quit \n");

}





void main(){
FILE *fp;
int no;
char paragraph[1000];
char input[100];
char heading[100];
char subheading[100];
char location[1000];
if((fp=fopen("Abc.html","a"))==NULL){
    fp=fopen("Abc.html","w");
}
fp=fopen("Abc.html","a");
 start:   info();
	scanf("%d",&no);
	fflush(stdin);
	switch(no){

case 1:printf("Enter Heading:");
       gets(heading);
       fprintf(fp,"%s%s%s","<h1 align=center>",heading,"</h1>");
       goto start;

case 2:printf("Enter Subheading:");
       gets(subheading);
       fprintf(fp,"%s%s%s","<h5 align=center>",subheading,"</h5>");
	   goto start;

case 3:fprintf(fp,"<body bgcolor=red>");
       goto start;

case 4:printf("Enter The paragraph:");
       fprintf(fp,"<p align=center>");
       while(gets(input)!='\0'){
           fprintf(fp,"%s",input);
       }
       fprintf(fp,"</p>");
       goto start;

case 5: printf("Enter the location of the image:");
        gets(location);
        fprintf(fp,"%s%s%s","<img src=\"",location,"\"></img>");
        goto start;
default:
    goto Done;
}
Done:printf("Done..");
}
