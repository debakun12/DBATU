#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   char name;
 if(name==NULL)
    printf("case 1:ITS NULL\n");
else
    printf("case 1:ITS NOT NULL\n");

    char namee = 'c';
 if(namee==NULL)
    printf("case 2:ITS NULL\n");
else
    printf("case 2:ITS NOT NULL\n");

   char *description;

 description = (char*)malloc( 200 * sizeof(char) );

 if(description==NULL)
    printf("case 3:ITS NULL");
 else
    printf("case 3:ITS NOT NULL");
}
