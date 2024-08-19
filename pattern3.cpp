/*1
  1 2
  1 2 3
  1 2
  1*/


#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int i,n,row ,col;
    cout<<"enter how many lines you wants to see:";
    cin>>n;



    for (row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            //char ch=col+64;
            cout<<"*"<<" ";
        }
        cout<<endl;

    }


    for (row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            //char ch=col+64;
            cout<<"*"<<" ";
        }
        cout<<endl;

    }

   getch();

}
