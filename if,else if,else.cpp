#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double num;
    cout<<"enter any number:";
    cin>>num;

    if (num>0){
        cout<<"the number is positive. ";
    }
    else if(num<0){
        cout<<"the number is negative.";
    }
    else{

        cout<<"the number is zero.";
    }
    getch();
}
