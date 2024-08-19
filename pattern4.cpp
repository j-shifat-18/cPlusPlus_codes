/*    1
    1 2
  1 2 3
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,n,row,col;
    cout<<"enter how many lines you wants to see:";
    cin>>n;

    for(row=1;row<=n;row++)
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
