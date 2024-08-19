#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    double num1,num2;

    cout<<setw(30)<<"please enter 2 numbers:";
    cin>>num1>>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(4);

    double sum=num1+num2;
    cout<<setw(30)<<"the sum is ="<<sum<<endl;

    //cout<<noshowpoint;

     double sub=num1-num2;
    cout<<setw(30)<<"the subtraction is ="<<sub<<endl;


     double mul=num1*num2;
    cout<<setw(30)<<"the multiplication is ="<<mul<<endl;

    double div=num1/num2;
    cout<<setw(30)<<"the division is ="<<div<<endl;

     int remain=(int)num1%(int)num2;
    cout<<setw(30)<<"the remainder is ="<<remain<<endl;

    getch();
}
