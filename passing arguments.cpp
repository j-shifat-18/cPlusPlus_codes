#include<iostream>
#include<conio.h>

using namespace std;

void display1(int num)
{
    num=20;
}

void display2(int *num)
{
    *num=20;
}

int main()
{
    int x=10;
    cout<<"before calling the function x ="<<x<<endl;

    display1(x);
    cout<<"after calling (pass by value) the function x="<<x<<endl;

    display2(&x);
    cout<<"after calling (pass by referance) the function x="<<x<<endl;


    getch();
}
