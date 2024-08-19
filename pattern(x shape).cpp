#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,row,col;
    cout<<"enter n:";
    cin>>n;

    for(row=1;row<=n;row++)
    {

        for(col=1;col<=n;col++)
        {
            if( row==col ||  row+col==n+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }



        }
        cout<<endl;
    }






    getch();
}

