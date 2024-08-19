#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x,y;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;

    x+=y;   //x=x+y
    cout<<"x'=x+y="<<x<<endl;

    x-=y;   //x=x-y
    cout<<"x''=x-y="<<x<<endl;

    x*=y;   //x=x*y
    cout<<"x'''=x*y="<<x<<endl;

    x/=y;   //x=x/y
    cout<<"x''''=x/y="<<x<<endl;

    x%=y;   //x=x%y
    cout<<"x'''''=x%y="<<x<<endl;


    getch();
}
