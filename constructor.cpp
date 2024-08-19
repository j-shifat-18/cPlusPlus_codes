//constructor is used for initializing the object

#include<iostream>
#include<conio.h>

using namespace std;

class shifat
{
public:
    int id;
    double gpa;


   /* void value (int x, double y)
    {
        id = x;
        gpa = y;

    } */
    void display ()
    {
        cout<<id <<" "<<gpa;

    }

    shifat(int x, double y)
    {
        id = x;
        gpa = y;
    }



};

int main()
{
    shifat legend(101,2.52);  // if i use constructor I can initiallize the value with object declaration
   // legend.value(101,2.52);
    legend.display();




    getch();
}
