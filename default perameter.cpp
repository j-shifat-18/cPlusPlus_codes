#include<iostream>
#include<conio.h>

using namespace std;


void sifat(int a=10,int b=25)
{
    cout<<a<<endl<<b<<endl;
}

int square(int n)
{
   // cin>>n;
    int result=n*n;
    cout<<"square of "<<n<<"="<<result<<endl;
}

int main()
{

    sifat();


    int p;
    cin>>p;
    square(p);



    getch();
}
