#include<stdio.h>
void main(){
int a;
printf("Size of integer before assignment is %d\n",sizeof(a));
a = 6636;
printf("Size of integer after assignment is %d\n",sizeof(a));
}
//memory occupied by integer does not depend on whether its assigned a value or not
