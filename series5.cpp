#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    double i,sum=1,n;
    cout<<"enter the last number:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum*(pow(i,2));
    }
    cout<<sum;

    getch();
}
