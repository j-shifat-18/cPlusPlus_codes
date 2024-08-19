#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,row,col;

    cout<<"enter how many lines you wants to see:";

    cin>>n;


    for(row=n;row>=1;row--)
    {
        //printing space
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }

        //printing *

        for(col=1;col<=2*row-1;col++)
        {
            cout<<col<<" ";

        }
        cout<<endl;
    }





    getch();
}
