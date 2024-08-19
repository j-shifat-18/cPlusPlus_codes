#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char name[30];
    cout<<"enter your nick  name:";
    cin>>name;

    for (int i=1;i<=100;i++)
    {
        cout<< "I LOVE YOU " <<name<<" "<<i<<endl;
    }



    getch();
}
