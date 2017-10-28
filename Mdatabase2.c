#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
char name[25];
char branch[20];
int year;
double percentage;
}stu;
char decision;
void main(){
//Take input
Start:printf("Please enter the name of the file:");
char file_name[15];
//it provides the extension
char extension[6]=".txt";
//this will contain the data of the file
 char line [ 128 ];
FILE *filePointer;
//this will take input from user
scanf(" %s",file_name);
//this will add extension to the file name
strcat(file_name,extension);
//this is the file pointer
filePointer=fopen(file_name,"r");
//this will check whether file exists or not
if(filePointer!=NULL){
printf("\nFile Found\n");

     while ( fgets ( line, sizeof line, filePointer ) != NULL ) /* read a line */
      {
         fputs ( line, stdout ); /* write the line */
      }
      fclose ( filePointer );




    printf("%s",line);
    fclose(filePointer);
}
else{
    printf("No such Student Found.Do you want to create a new Record??");
    char decision1;
    scanf(" %c",&decision1);
//Create a new file
    if(decision1=='Y'||decision1=='y'){
        filePointer=fopen(file_name,"w");
        printf("File Successfully Created\n");
        printf("Please Enter The Following Details\n");
        printf("Name:");
        scanf("%s",&stu.name);
        fprintf(filePointer,"Name:""%s""\n",stu.name);
        printf("Branch:");
        scanf(" %s",&stu.branch);
        fprintf(filePointer,"Branch:""%s""\n",stu.branch);
        printf("Year:");
        scanf(" %d",&stu.year);
        fprintf(filePointer,"Year:""%d""\n",stu.year);
        printf("Percentage:");
        scanf("%lf",&stu.percentage);
        fprintf(filePointer,"Percentage:""%lf""\n",stu.percentage);
        printf("File Details Entered Successfully\n");
        goto Search_again;
    }
    else if(decision1=='N'||decision1=='n'){
//Search for another
    Search_again:printf("Do you Want to Search For another Student?");
        scanf(" %c",&decision);
            if(decision=='Y'||decision=='y'){
            goto Start;
            }
            else if(decision=='N'||decision=='n'){

            }

    }

}
}
