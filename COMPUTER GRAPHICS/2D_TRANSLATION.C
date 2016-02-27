#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void reflection_x(int x1, int x2, int x3, int y1, int y2, int y3, int mx, int my){
	mx = getmaxx()/2;
	my = getmaxy()/2;
	setcolor(WHITE);
	line(x1+mx,y1+my,x2+mx,y2+my);
	line(x2+mx,y2+my,x3+mx,y3+my);
	line(x3+mx,y3+my,x1+mx,y1+my);

	setcolor(8);
	line(mx + x1,my - y1,mx + x2,my - y2);
	line(mx + x2,my - y2,mx + x3,my - y3);
	line(mx + x3,my - y3,mx + x1,my - y1);
}

void reflection_y(int x1, int x2, int x3, int y1, int y2, int y3, int mx, int my){
	mx = getmaxx()/2;
	my = getmaxy()/2;
	setcolor(WHITE);
	line(x1+mx,y1+my,x2+mx,y2+my);
	line(x2+mx,y2+my,x3+mx,y3+my);
	line(x3+mx,y3+my,x1+mx,y1+my);
	setcolor(8);
	line(mx - x1,my + y1,mx - x2,my+ y2);
	line(mx - x2,my + y2,mx - x3,my + y3);
	line(mx - x3,my + y3,mx - x1,my + y1);
}


void shearing(int x1, int x2, int x3, int y1, int y2, int y3, int mx, int my, int sx, int sy){
	int a, b, c, d, e, f;
	mx = getmaxx()/2;
	my = getmaxy()/2;
	setcolor(WHITE);
	line(x1+mx,y1+my,x2+mx,y2+my);
	line(x2+mx,y2+my,x3+mx,y3+my);
	line(x3+mx,y3+my,x1+mx,y1+my);

	a = x1 + y1*sx;
	b = y1 + x1*sy;
	c = x2 + y2*sx;
	d = y2 + x2*sy;
	e = x3 + y3*sx;
	f = y3 + x3*sy;
	setcolor(8);
	line(a+mx,b+my,c+mx,d+my);
	line(c+mx,d+my,e+mx,f+my);
	line(e+mx,f+my,a+mx,b+my);
}

void main()
{

	int gd=DETECT,gm, x1, x2, x3, y1, y2, y3, p, mx, my, sx, sy, choice;
	clrscr();
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	mx = getmaxx()/2;
	my = getmaxy()/2;
	setcolor(3);
	line( 0, my, getmaxx(), my );
	line( mx, 0, mx, getmaxy() );

	printf("Enter coordinates of 1st vertex of triangle: ");
	scanf("%d %d",&x1,&y1);

	printf("Enter coordinates of 2nd vertex of triangle: ");
	scanf("%d %d",&x2,&y2);

	printf("Enter coordinates of 3rd vertex of triangle: ");
	scanf("%d %d",&x3,&y3);

	printf("Enter the operation to be carried out?\n1. Reflection about x axis.\n2.Reflection about y axis.\n3.shearing\n");
	printf("Choice: ");
	scanf("%d",&choice);

	while( choice < 4 && choice > 0 ){
		switch( choice ){
			case 1: 
				reflection_x( x1, x2, x3, y1, y2, y3, mx, my);
				break;
			case 2: 
				reflection_y( x1, x2, x3, y1, y2, y3, mx, my);
				break;
			case 3:
				printf("Enter value of shearing in x and y: ");
				scanf("%d%d",&sx,&sy);
				shearing( x1, x2, x3, y1, y2, y3, mx, my, sx, sy);
				break;				
		}
		printf("Choice: ");
		scanf("%d",&choice);
	}
	closegraph();
}