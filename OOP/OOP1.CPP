#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

struct student{
    char name[20];
    int roll_no ;
    int marks[5];
    float percentage;
}st[3];

void input_data()
{
    int i, j;

    for( i=0; i<3; i++ )
    {
	cout << "\nEnter records of students \n Name: ";
	gets(st[i].name);

	cout << " Roll Number: ";
	cin >> st[i].roll_no;

	cout << " Marks of 5 subjects: ";
	for( j=0; j<5; j++ )
	{
	    cin >> st[i].marks[j];
	}

    }
}

void compute_data()
{
    int x, y, temp;

    for( x=0; x<3; x++ )
    {
	temp = 0;

	for( y=0; y<5; y++ )
	{
	    temp += st[x].marks[y];
	}

	st[x].percentage = (float)temp/5;
    }
}

void display_data()
{
    int i, j;

    cout << "Records of students - \n";

    for( i=0; i<3; i++ )
    {
	cout << "---------------------------\n";

	cout << " Name: ";
	puts(st[i].name);

	cout << " Percentage: " << st[i].roll_no << "\n";

	cout << " Marks: ";
	for( j=0; j<5; j++ )
	{
	    cout << st[i].marks[j];
	    cout << " ";
	}

	cout << "\n Percentage: " << st[i].percentage << "\n";

	if( (int)st[i].percentage >= 80 )
	{
		cout << "Grade: A\n";
	}

	else if( (int)st[i].percentage >= 60 )
	{
		cout << "Grade: B\n";
	}

	else
	{
		cout << "Grade: C\n";
	}

    }
}

void main()
{
    clrscr();

    input_data();
    compute_data();
    display_data();

    getch();
}

