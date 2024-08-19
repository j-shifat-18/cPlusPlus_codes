#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,i,sum=0,remain,temp;
    cout<<"enter any integer number:";
    cin>>num;

    temp=num;

    while(temp!=0)
    {
        remain=temp%10;
        int fact=1;
        for(i=1;i<=remain;i++)
        {
          fact=fact*i;
        }


        sum=sum+fact;
        temp=temp/10;
    }

    if(sum==num)
    {
        cout<<"strong nunmber.";
    }
    else{
        cout<<"not strong number.";
    }

    getch();
}
