#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num[]={10,11,12,25,165,45,42,3,15,25};
    int pos=-1,i,value;

    cout<<"enter which number you wants to search:";
    cin>>value;

    for(i=0;i<10;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }

    if(pos==-1)
    {
        cout<<"number not found.";

    }
    else
    {
        cout<<"the position of the number is "<<pos;
    }





    getch();
}
