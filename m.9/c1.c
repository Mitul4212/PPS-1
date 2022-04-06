#include<stdio.h>
#include<graphics.h>

void main(){
	int  gd=DETECT,gm,color;
	initgraph(&gd,&gm,"");
	putpixel(85,35,GREEN);
	closegraph();
	initgraph(&gd,&gm,"");
	arc(250,250,155,300,100);
	closegraph();
	initgraph(&gd,&gm,"");
	line(100,100,200,100);
	line(10,10,200,10);
	closegraph();
	initgraph(&gd,&gm,"");
	circle(250,200,50);
	closegraph();
	getch();
}
