#include<iostream>
#include<conio.h>

using namespace std;

class student
{
    public:
        int id;
        double gpa ;


        void display()
        {
            cout<<id <<" "<<  gpa<<endl<<endl;

        }

        void setvalue(int x, double y)
        {
            id=x;
            gpa=y;
        }





};


int main()
{

    student sifat,nadia;

    sifat.setvalue(101,3.99);
    sifat.display();

   // cout<<"sifat:"<<endl<<"id="<<sifat.id<<"  gpa="<<sifat.gpa<<endl<<endl;

    nadia.setvalue(102,3.29);
    nadia.display();

    //cout<<"nadia:"<<endl<<"id="<<nadia.id<<"  gpa="<<nadia.gpa<<endl<<endl;






    getch();
}
