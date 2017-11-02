#include<stdio.h>
void main(){
FILE *fp;
int qty[7];
printf("Enter Qty:");
int i=0;
while(i<7){
    scanf("%d",&qty[i]);
    i++;
}

fp=fopen("graph.html","w");


fprintf(fp,"%s","<html><body><canvas id=\"myCanvas\" width=\"1350\" height=\"20000\"style=\"border:1px solid #c3c3c3;\">Your browser does not support the canvas element.</canvas><script>var canvas = document.getElementById(\"myCanvas\");var ctx = canvas.getContext(\"2d\");ctx.fillStyle = \"#000000\";");
i=0;
while(i<7){
fprintf(fp,"%s%d%s%d%s","ctx.fillRect(",  200*i+50, ",100,75,"  , qty[i],");");
fprintf(fp,"%s%d%s%d%s%d%s","ctx.font=\"20px Arial\";ctx.fillText(\"",qty[i],"\",",i*200,",",qty[i]+100,");");
fprintf(fp,"%s%d%s%d%s","ctx.beginPath();ctx.moveTo(0,",qty[i]+100,");ctx.lineTo(5000,",qty[i]+100,");ctx.stroke();");
i++;
}
i=100;

while(i<10000){


fprintf(fp,"%s%d%s%d%s","ctx.font=\"10px Arial\";ctx.fillText(\"",i-100,"\",0,",i,");");
fprintf(fp,"%s%d%s%d%s","ctx.beginPath();ctx.moveTo(0,",i,");ctx.lineTo(5000,",i,");ctx.stroke();");

i=i+100;

}
fprintf(fp,"%s","</script>");
}

