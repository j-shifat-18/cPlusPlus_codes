#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"enter the last number:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+ pow(i,5);

    }

    cout<<sum;

    getch();
}
