#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,rem,n1,n2;
    cout<<"enter 2 number:";
    cin>>num1>>num2;
    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<"GCD="<<n1<<endl;
    cout<<"LCM="<<((num1*num2)/n1);

    getch();
}
