#include<iostream.h>
#include<conio.h>

class A
{
    float r;
    int s;
    double l,b,peri;


    public:
        void per(float r);
        void per(int s);
        void per(double l,double b);
        void disp()
        {
            cout<<"Perimeter : "<<peri;
        }
};

void A::per(float r)
{
    peri=2*3.142*r;
    disp();
}

void A::per(int s)
{
    peri=4*s;
    disp();
}

void A::per(double l,double b)
{
    peri=2*(l+b);
    disp();
}

void main()
{
    clrscr();
    cout<<"MENU : \n 1.Circle \n 2.Square \n 3. Rectangle \n Choice : ";
    int ch;
    cin >>ch;

    A obj;
    switch(ch)
    {
        case 1:float r;
        cout<<"Radius : ";
        cin>>r;
        obj.per(r);
        break;

        case 2:int s;
        cout<<"Side : ";
        cin>>s;
        obj.per(s);
        break;

        case 3:float l,b;
        cout<<"Length , Breadth : ";
        cin>>l>>b;
        obj.per(l,b);
        break;

        default:cout<<"Wrong Choice ";
    }
    getch();
}
