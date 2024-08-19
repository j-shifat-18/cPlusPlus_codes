#include<iostream>
#include<conio.h>

using namespace std;

class student
{
public :
    const int addmissionFee;
    const int examFee;
    int id;

    student(int x,int y,int z)
    : addmissionFee (x) , examFee(y)
    {
        id = z;
        cout<<"id ="<<id<<endl;

        cout<<"addmission fee ="<<addmissionFee<<endl;
        cout<<"exam fee ="<<examFee<<endl;


    }

};




int main()
{
    student s1(1500,200,101);


    getch();
}
