#include<iostream>
#include<conio.h>
using namespace std;

int x=20; //global variable

void display()
{
     cout <<"inside the display functio ="<<x<<endl;
}

int main()
{

    int x=50;  //local variable
    cout <<"inside the main functio ="<<::x<<endl;  //:: ->converts global variable into local variable


    display();




    getch();
}
