#include<iostream>
#include<conio.h>

using namespace std;

class person
{
public:
    string name;
    int id;



    void display1()
    {
        cout <<"Name: "<<name<<endl;
        cout <<"Id: "<<id<<endl;
    }
};

class student : public person
{
public:
    int roll;

    void display2()
    {
       display1();
       cout<<"Roll: "<<roll<<endl;
    }



};



int main()
{
    student s1;
    s1.name ="shifat";
    s1.id=101;
    s1.roll=18;
    s1.display2();



    getch();
}
