#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,count=0;
    cout<<"enter an integer number :";
    cin>>num;

    while(num!=0)
    {
        num=num/10;
        ++count;

    }
    cout<<"total number of digits="<<count;

    getch();
}
