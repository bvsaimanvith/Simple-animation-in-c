#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main(){
//graphics driver(gd) intialized to ennumerated constant "DETECT",
//graphics mode(gm) is automatically set to the highest resolution available
int gd=DETECT,gm;

int i,x,y,flag=0;
//intializing the graphics drivers on computer opening the 'gui'
initgraph(&gd,&gm,"");
//getting the middle position in x,y-axis
y=getmaxy()/2;
x=200;
while(!kbhit()){
if(x>=getmaxx()-200||x<=200) flag=!flag;
setcolor(RED);
//draws  the walls
line(170,0,170,getmaxy());
line(getmaxx()-170,0,getmaxx()-170,getmaxy());
setfillstyle(SOLID_FILL,RED);
//draws the ball and fills it
circle(x,y,30);
floodfill(x,y,RED);
//delays for 8.3333334ms(milli seconds)
delay(8.3333334);
//clears screen for next image at a different location
cleardevice();
if(flag) x=x+1;
else x=x-1;
}
getch();
closegraph();
}