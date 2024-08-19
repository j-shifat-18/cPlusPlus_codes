#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int num,fact=1;
    cout<<"enter any positive number:";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
        //cout<<"factorial of the number is="<<fact;//vitore use korle alada alada output pawa jabe
    }
        cout<<"factorial of the number is="<<fact;

    getch();
}
