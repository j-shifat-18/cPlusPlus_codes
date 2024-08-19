#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"input a:";
    cin>>a;

    cout<<"input b:";
    cin>>b;

    c=a&b;
    cout<<"bitwise and="<<c;

    c=a|b;
    cout<<"bitwise or="<<c<<endl;

    c=a^b;
    cout<<"bitwise xor="<<c<<endl;

    c=~a;
    cout<<"bitwise not(a)="<<c<<endl;

    c=~b;
    cout<<"bitwise not(b)="<<c<<endl;





    getch();
}
