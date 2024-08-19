#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int year;
    cout<<"please enter year:";
    cin>>year;

    if((year%4==0 && year%100!=0)||(year%400==0))  //ek line e onkgula condition use kora hoise. eta na kore nicger line gula likheo kora jaito
    {
        cout<<"leap year.";
    }
    /*else if(year%400==0)
    {
        cout<<"leap year";
    }*/
    else{
        cout<<"not leap year";
    }
    getch();
}
