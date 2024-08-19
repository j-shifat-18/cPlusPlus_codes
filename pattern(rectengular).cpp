#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,n,row,col;
    cout<<"enter n:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || col==1 || row==n || col==n )
            {
                cout<<".";
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
