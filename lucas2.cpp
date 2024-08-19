#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,i;
    cout<<"enter the last number :";
    cin>>n;

    int first=2,second=1;
    cout<<first<<" "<<second<<" ";

    for(i=3;i<=n;i++)
    {
        int lucas=first+second;
        cout<<lucas<<" ";
        first=second;
        second=lucas;

    }



    getch();
}
