#include <stdio.h>
//these are the predefined macros
void main() {

   printf("File :%s\n", __FILE__ );//this tells u the current location of the c program
   printf("Date :%s\n", __DATE__ );//this tells u about the date
   printf("Time :%s\n", __TIME__ );//this tells u about the time
   printf("Line :%d\n", __LINE__ );//this tells u the current line it is in the c program source code
   printf("ANSI :%d\n", __STDC__ );//will return 1 if computer compiles with ANSI STANDARD

}
