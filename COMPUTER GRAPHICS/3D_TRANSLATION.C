#include<stdio.h>
#include<conio.h>
#include<graphics.h>

double x[9],y[9],z[9],xmax,ymax,zmax,xmin,ymin,zmin;
double d=10;

void pers()
{
	int i;

	for(i=1;i<=8;i++)
	{
		x[i]=x[i]/((z[i]/d) + 1);
		y[i]=y[i]/((z[i]/d) + 1);
	}

	rectangle(x[1],y[1],x[4],y[4]);


	for(i=1;i<=4;i++)
	{
		line(x[i],y[i],x[i+4],y[i+4]);
	}

	rectangle(x[5],y[5],x[8],y[8]);

}

void main()
{
	int gd=DETECT,gm,i,ch,tx,ty,tz;
	double sx,sy,sz;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	printf("Enter the maximum value of x,y,z : ");
	scanf("%lf%lf%lf",&xmax,&ymax,&zmax);
	printf("Enter the minimum value of x,y,z : ");
	scanf("%lf%lf%lf",&xmin,&ymin,&zmin);

	for(i=1;i<=8;i++)
	{
		if(i<=4)
		z[i]=zmin;
		else
		z[i]=zmax;

		if(i<=2 || i==5 || i==6)
		y[i]=ymin;
		else
		y[i]=ymax;

		if(i%2!=0)
		x[i]=xmin;
		else
		x[i]=xmax;
	}

	printf("MENU :\n 1. Translation \n 2. Scaling \n 3. Rotation \n Enter your choice : ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:printf("Enter the translation in x,y and z direction : ");
				scanf("%d%d%d",&tx,&ty,&tz);
				for(i=1;i<8;i++)
				{
					x[i]+=tx;
					y[i]+=ty;
					z[i]+=tz;
				}
				pers();

				break;

		case 2: printf("Enter the scaling in x,y and z direction : ");
				scanf("%d%d%d",&sx,&sy,&sz);
				for(i=1;i<8;i++)
				{
					x[i]*=sx;
					y[i]*=sy;
					z[i]*=sz;
				}
				pers();
				break;

		case 3:break;
		default: printf("\nWrong choice..");
	}



	getch();
	closegraph();
}
