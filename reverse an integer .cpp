#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,temp,r,sum=0;
    cout<<"enter an integer number:";
    cin>>num;

    temp=num;

    while(temp!=0)
    {

        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;

    }
    cout<<"reverse of the number="<<sum;

    getch();
}

