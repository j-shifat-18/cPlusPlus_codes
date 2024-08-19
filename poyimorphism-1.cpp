#include<iostream>
#include<conio.h>

using namespace std;

class shape
{
public:
    double dim1,dim2;

    shape(double dim1,double dim2)
    {
        this->dim1=dim1;
        this->dim2=dim2;
    }

    virtual double area()
    {

        return 0;
    }


};

class triangle:public shape
{
    //dim1,dim2,area();
public:
    triangle (double dim1,double dim2)
        :shape(dim1,dim2)
    {

    }

    double area()
    {
        return 0.5*dim1*dim2;
    }





};

class rectangle :public shape
{
    //dim1,dim2,area();
public:
    rectangle (double dim1,double dim2)
        :shape(dim1,dim2)
    {

    }

    double area()
    {
        return dim1*dim2;
    }





};


int main()
{
    shape *s;
    triangle t(10,5);
    rectangle r(10,5);

    s=&t;
    cout<<"Trinagle area = "<<s->area()<<endl;

    s=&r;
    cout<<"Rectangle area= "<<s->area()<<endl;








    getch();
}
