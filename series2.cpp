#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the last number:";
    cin>>n;

    for(int i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }

    cout<<sum;


    getch();
}
