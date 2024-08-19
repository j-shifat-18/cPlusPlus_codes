#include<iostream>
#include<conio.h>

using namespace std;

class person
{
public:
    void display()
    {
        cout<<"I AM A PERSON."<<endl;
    }
};

class student:public person
{
public:
    void display()
    {
        cout<<"I AM A student."<<endl;
    }
};
class teacher:public person
{
public:
    void display()
    {
        cout<<"I AM A TEACHER."<<endl;
    }
};

int main()
{
    person p;
    p.display();

    student s;
    s.display();

    teacher t;
    t.display();


    getch();
}
