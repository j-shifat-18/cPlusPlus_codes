/*1
  2 4
  3 6 9
  4 8 12 16 */


#include<iostream>
#include<conio.h>

  using namespace std;

  int main()
{
    int n,row,col;

    cout<<"enter how many lines you wants to see:";

    cin>>n;


    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row*col<<" ";

        }
        cout<<endl;
    }



     getch();

}


