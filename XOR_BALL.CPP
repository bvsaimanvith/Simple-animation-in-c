#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main(){
int gd=DETECT,gm,i,x,y,flag=0;
initgraph(&gd,&gm,"");
x=getmaxx()/2;
y=150;
setwritemode(XOR_PUT);
while(!kbhit()){
if(y>=getmaxy()-150||y<=150) flag=!flag;
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(x,y,30);
//floodfill(x,y,RED);
delay(10);
circle(x,y,30);
//floodfill(x,y,RED);
if(flag) y=y+1;
else y=y-1;
}
getch();
closegraph();
}