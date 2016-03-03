#include<iostream.h>
#include<conio.h>

class rect
{
    double l,b,ans;

    public:
        rect(){};
        rect(double l,double b);

        void area()
        {
            ans=l*b;
            disp();
        }

        void disp()
        {
            cout<<"Area : "<<ans;
        }
};

rect::rect(double l,double b)
{
    this->l=l;
    this->b=b;
}

void main()
{
    clrscr();

    double l,b;
    cout<<"Enter length & breadth : ";
    cin>>l>>b;
    rect obj(l,b);
    obj.area();
    getch();
}
