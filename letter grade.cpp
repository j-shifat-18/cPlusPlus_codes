#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num;
    cout<<"enter your mark=";
    cin>>num;

    if(num>100 ||num<0)  //using logical OR
    {
        cout<<"invalid mark!";
    }
   /* else if(num<0)
    {
        cout<<"invalid mark!";
    }*/
    else if(num>=80){
        cout<<"A+";
    }
    else if(num>=70){
        cout<<"A";
    }
    else if(num>=60){
        cout<<"A-";
    }
    else if(num>=50){
        cout<<"B";
    }
    else if(num>=40){
        cout<<"C";
    }
    else if(num>=33){
        cout<<"D";
    }
    else {
        cout<<"Failed";
    }
    getch();
}
