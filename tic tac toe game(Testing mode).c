#include <stdlib.h>
#include <time.h>



int tls=0,ts=0,trs=0,mls=0,ms=0,mrs=0,bls=0,bs=0,brs=0;
char tl,t,tr,ml,m,mr,bl,b,br;







//the following function will just print out the tic tac toe board
void write(){
printf("%c ",tl);printf("|");printf(" %c ",t);printf("|");printf(" %c",tr);
printf("\n");
printf("--");printf("--");printf("--");printf("--");printf("--");
printf("\n");
printf("%c ",ml);printf("|");printf(" %c ",m);printf("|");printf(" %c",mr);
printf("\n");
printf("--");printf("--");printf("--");printf("--");printf("--");
printf("\n");
printf("%c ",bl);printf("|");printf(" %c ",b);printf("|");printf(" %c",br);
printf("\n");
}




int random(int range){
    int num;
    num = rand() % range;
    return num;
}

void main(){
  //time function
   START:printf("####COMPUTER####\n");
        int cnt = 0;
    int i=0;
    int j=0;
    // Seed random number generator
    srand(time(NULL));


 int infinite=0;
while(i!=1){

NEW:printf("");
int pc=random(10);

if(pc==1&&tls==0){
    tl='X';
    tls=1;
    write();
    break;
} else if(pc==1&&tls==1){
goto NEW;
}

if(pc==2&&t==0){
    t='X';
    ts=1;
    write();
    break;
} else if(pc==2&&ts==1){
goto NEW;
}

if(pc==3&&trs==0){
    tr='X';
    trs=1;
    write();
    break;
} else if(pc==3&&trs==1){
goto NEW;
}

if(pc==4&&mls==0){
    ml='X';
    mls=1;
    write();
    break;
} else if(pc==4&&mls==1){
goto NEW;
}

if(pc==5&&ms==0){
    m='X';
    ms=1;
    write();
    break;
} else if(pc==5&&ms==1){
goto NEW;
}

if(pc==6&&mrs==0){
    mr='X';
    mrs=1;
    write();
    break;
}  else if(pc==6&&mrs==1){
goto NEW;
}

if(pc==7&&bls==0){
    bl='X';
    bls=1;
    write();
    break;
} else if(pc==7&&bls==1){
goto NEW;
}

if(pc==8&&b==0){
    b='X';
    bs=1;
    write();
    break;
} else if(pc==8&&bs==1){
goto NEW;
}

if(pc==9&&brs==0){
    br='X';
    brs=1;
    write();
    break;
} else if(pc==9&&brs==1){
goto NEW;
}

}
printf("\n");

//user input here

i=3;
while(i!=1){
    User:printf("Enter Valid no:");

    int u;
    scanf("%d",&u);
    printf("####USER####\n");
    if(u==1&&tls==0){
    tl='O';
    tls=1;
    write();
    break;
} else if(u==1&&tls==1){
goto User;
}

if(u==2&&t==0){
    t='O';
    ts=1;
    write();
    break;
} else if(u==2&&ts==1){
goto User;
}

if(u==3&&trs==0){
    tr='O';
    trs=1;
    write();
    break;
} else if(u==3&&trs==1){
goto User;
}

if(u==4&&mls==0){
    ml='O';
    mls=1;
    write();
    break;
} else if(u==4&&mls==1){
goto User;
}

if(u==5&&ms==0){
    m='O';
    ms=1;
    write();
    break;
} else if(u==5&&ms==1){
goto User;
}

if(u==6&&mrs==0){
    mr='O';
    mrs=1;
    write();
    break;
} else if(u==6&&mrs==1){
goto User;
}

if(u==7&&bls==0){
    bl='O';
    bls=1;
    write();
    break;
} else if(u==7&&bls==1){
goto User;
}

if(u==8&&b==0){
    b='O';
    bs=1;
    write();
    break;
} else if(u==8&&bs==1){
goto User;
}

if(u==9&&brs==0){
    br='O';
    brs=1;
    write();
    break;
} else if(u==9&&brs==1){
goto User;

}

}
/*
//HEYHEYHEYHEYHEY
if('X'==tl==t==tr||'X'==tl==ml==bl||'X'==tl==m==br||'X'==tr==mr==br||'X'==bl==b==br){
printf("COMPUTER Wins");
goto END;
}
if('O'==tl==t==tr||'O'==tl==ml==bl||'O'==tl==m==br||'O'==tr==mr==br||'O'==bl==b==br){
printf("HOOMAN Wins");
goto END;
}
//HEYHEYHEYHEYHEY
*/
printf("\n");
       goto START;

END:printf("End of Game");

}


