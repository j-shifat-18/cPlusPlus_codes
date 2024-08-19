/*1 2 3 4 5
  1 2 3 4 5 */

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
        for(col=1;col<=n;col++)
        {
            char ch=col+64;
            cout<<ch<<" ";
        }
        cout<<endl;
    }




    getch();

}
