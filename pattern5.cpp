/* 1 2 3
     1 2
       1
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,n,row,col;
    cout<<"enter how many lines you wants to see:";
    cin>>n;

    for(row=n;row>=1;row--)
    {
        //printing space
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }

         //printing number
        for(col=1;col<=row;col++)
        {
            cout<< col;

        }
        cout<<endl;
    }





    getch();
}

