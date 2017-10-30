#include<stdio.h>
void main(){
    //this is a 2 dimensional array.You can create arrays of nth dimensions
int arrayy[10][2]={{2,1},{3,2},{4,6},{8,3},{4,6},{1,7},{2,7},{2,7},{2,7}};
int i=0;
int j=0;
for(i=0;i<9;i++){
        for(j=0;j<2;j++){
printf("%d",arrayy[i][j]);
     printf("\t");
        }
        printf("\n");
}




}
