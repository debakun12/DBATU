#include<stdio.h>
void main(){


struct lag{

int fps;
char game[40];

}lagg;

printf("Enter fps:");
scanf("%d",&lagg.fps);
printf("Enter Game Name:");
scanf("%s",lagg.game);
printf("The fps is %d in game %s",lagg.fps,lagg.game);

}
