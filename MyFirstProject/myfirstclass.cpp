#include "myfirstclass.h" //has to include this header file into main.cpp file
#include<iostream>

using namespace std;

MyFirstClass::MyFirstClass()
{
    cout<<"INSIDE THE CONSTRUCTOR ."<<endl;
}

MyFirstClass :: ~MyFirstClass()
{
    cout<<"DESTRUCTOR IS CALLED."<<endl;
}


void MyFirstClass :: display()
{
    cout<<"INSIDE THE DISPLAY FUNCTION."<<endl;
}

