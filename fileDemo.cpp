#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>


using namespace std;

int main()
{
    string name;
    ofstream file;
    file.open("student.txt",ios::out|ios::app); //FOR ADDING NEW TEXT TO PREVIOUS TEXT

    cout<<"Enter your name & details: ";
    getline(cin,name);

    file<<name<<endl;

    file.close();




    getch();
}


