/*enter n:4
   1
  121
 12321
1234321
*/

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
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }


        for(col=1;col<=row;col++)
        {
           cout<<col;


        }

        for(col=row-1;col>=1;col--)
        {
            cout<<col;
        }

        cout<<endl;
    }



    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }


        for(col=1;col<=row;col++)
        {
           cout<<col;


        }

        for(col=row-1;col>=1;col--)
        {
            cout<<col;
        }

        cout<<endl;
    }






    getch();
}


