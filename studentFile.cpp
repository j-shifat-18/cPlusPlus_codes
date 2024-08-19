#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>

using  namespace std;

int main()
{
    string name;
    int age ;

    ofstream file;
    file.open("student_details.txt",ios::out|ios::app);

    file<<"NAME\tAGE"<<endl<<endl;

    for(int i; i<=3; i++)
    {
        cout<<"Enter your name :";

        getline(cin,name);


        file<<name<<"\t";

        cout<<"Enter your age:";
        cin>>age;

        file<<age<<endl;

        cin.ignore();


    }

    file.close();


    getch();
}
