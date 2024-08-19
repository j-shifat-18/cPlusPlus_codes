#include<iostream>
#include<conio.h>
#include<Cmath>

using namespace std;

int main()
{
    int i,n,sum=0,mul;
    cout<<"enter the last number:";
    cin>>n;

    for(i=1;i<=n;i=i+2)
    {
        mul=i*(i+1);
        sum=sum+mul;

    }
     cout<<sum;

    getch();
}
