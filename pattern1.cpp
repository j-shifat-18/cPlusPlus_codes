//1
//1 2
//1 2 3

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,row,col;
    cout<<"enter hoe many lines you wants to see:";
    cin>>n;


    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            char ch=row+96;    //ascii code for A=65 ; a=97
            cout<<ch<<" ";

        }
        cout<<endl;
    }




    getch ();

}
