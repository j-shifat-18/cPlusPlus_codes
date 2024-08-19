#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,count=0,first=0,second=1,fibo;
    cout<<"enter the last number :";
    cin>>n;

    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else

        {
            fibo=first+second;
            first=second;
            second=fibo;
        }

       cout<<fibo<<" ";
       count++;
    }



    getch();
}
