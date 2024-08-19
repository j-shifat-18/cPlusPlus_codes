#include<iostream>
#include<conio.h>

using namespace std;

class mobileUser
{
public:
    virtual void sendMessage()=0;

};

class shifat : public mobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hellow . This is shifat."<<endl;
    }

};


class nadia : public mobileUser
{
public:
    void sendMessage()
    {
        cout<<"Hellow . This is nadia."<<endl;
    }

};


int main()
{
    mobileUser *m;
    shifat s;
    nadia n;

    m=&s;
    m->sendMessage();

    m=&n;
    m->sendMessage();






    getch();
}
