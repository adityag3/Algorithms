#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

class student
{
	private:
		    char name[20];
		    int roll_no ;
		    int marks[5];
		    float percentage;
		    int i, j, x, y, temp;

	public:
		void inputdata();
		void computedata();
		void displaydata();

}

void student::inputdata()
{
	cout << "\nEnter records of students \n Name: ";
	gets(name);

	cout << " Roll Number: ";
	cin >> roll_no;

	cout << " Marks of 5 subjects: ";
	for( j=0; j<5; j++ )
	{
	    cin >> marks[j];
	}

}

void student::computedata()
{

	temp = 0;

	for( y=0; y<5; y++ )
	{
	    temp += marks[y];
	}

	percentage = (float)temp/5;

}

void student::displaydata()
{

    cout << "Records of student - \n";

	cout << "---------------------------\n";

	cout << " Name: ";
	puts(name);

	cout << " Percentage: " << roll_no << "\n";

	cout << " Marks: ";
	for( j=0; j<5; j++ )
	{
	    cout << marks[j];
	    cout << " ";
	}

	cout << "\n Percentage: " << percentage << "\n";

	if( (int)percentage >= 80 )
	{
		cout << "Grade: A\n";
	}

	else if( (int)percentage >= 60 )
	{
		cout << "Grade: B\n";
	}

	else
	{
		cout << "Grade: C\n";
	}

    }


void main()
{
    clrscr();

    student A, B, C;

    A.inputdata();
   A.computedata();
  A.displaydata();

    B.inputdata();
   B.computedata();
  B.displaydata();

    C.inputdata();
   C.computedata();
  C.displaydata();

    getch();
}

