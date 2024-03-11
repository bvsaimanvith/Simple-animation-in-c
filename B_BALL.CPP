#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void front_ball(int i,int x){
for(i=0;i<300;i++){
setcolor(WHITE);
line(0,330,600,330);
setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTRED);
circle(i,i,30);
floodfill(i,i,RED);
delay(8.3334);
cleardevice();
}
for(i=300,x=0;i>=0;i--,x++){
setcolor(WHITE);
line(0,330,600,330);
setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTRED);
circle(300+x,i,30);
floodfill(300+x,i,RED);
delay(8.3334);
cleardevice();
}
}
void back_ball(int i,int x){
for(i=0;i<300;i++,x++){
setcolor(WHITE);
line(0,330,600,330);
setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTRED);
circle(600-x,i,30);
floodfill(600-x,i,RED);
delay(8.3334);
cleardevice();
}
for(i=300,x=0;i>=0;i--,x++){
setcolor(WHITE);
line(0,330,600,330);
setcolor(RED);
setfillstyle(SOLID_FILL,LIGHTRED);
circle(300-x,i,30);
floodfill(300-x,i,RED);
delay(8.3334);
cleardevice();
}
}
void wall_ball(){
int i,x,y,flag=0;
y=getmaxy()/2;
x=200;
while(!kbhit()){
if(x>=getmaxx()-200||x<=200) flag=!flag;
setcolor(RED);
line(170,0,170,getmaxy());
line(getmaxx()-170,0,getmaxx()-170,getmaxy());
setfillstyle(SOLID_FILL,RED);
circle(x,y,30);
floodfill(x,y,RED);
delay(8.3333334);
cleardevice();
if(flag) x=x+1;
else x=x-1;
}
}
void basic_ball(){
int x=getmaxx()/2,y=30,flag=0;
while(!kbhit()){
if(y>=getmaxy()-30||y<=30) flag=!flag;
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(x,y,30);
floodfill(x,y,RED);
delay(10);
cleardevice();
if(flag) y=y+1;
else y=y-1;
}
}
void main(){
int i,x=0,n;
printf("select animation to be displayed\n1\t2\t(or)\t3\n");
scanf("%d",&n);
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
if(n==1)
basic_ball();
else if(n==2)
wall_ball();
else if(n==3){
while(!kbhit()){
front_ball(i,x);
back_ball(i,x);
}}
else printf("enter a valid value!\n");
getch();
closegraph();
}