#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int x1,x2,x3,y1,y2,y3,tx,ty;

void main()
{
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"C:\\TC:\\BGI");

	printf("Enter the coordinates of the triangle : \n");
	scanf("%d%d",&x1,&y1);
	scanf("%d%d",&x2,&y2);
	scanf("%d%d",&x3,&y3);


	printf("Enter the transaltion in x-direction : ");
	scanf("%d",&tx);
	printf("Enter the transaltion in y-direction : ");
	scanf("%d",&ty);

	closegraph();initgraph(&gd,&gm,"C:\\TC\\BGI");

	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);


	setcolor(8);
	line(x1+tx,y1+ty,x2+tx,y2+ty);
	line(x2+tx,y2+ty,x3+tx,y3+ty);
	line(x3+tx,y3+ty,x1+tx,y1+ty);




	getch();
	closegraph();
}