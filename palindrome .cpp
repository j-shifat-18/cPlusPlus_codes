#include<iostream>
#include<conio.h>
using namespace std;

int main()         //palindrome :any number=reverse of the number
{
    int num,temp,r,sum=0;
    cout<<"enter an integer number:";
    cin>>num;

    temp=num;

    while(temp!=0)
    {

        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;

    }
    if(num==sum)
    {
        cout<<"the number is palindrome!";

    }
    else{
        cout<<"the is not palindrome.";
    }

    getch();
}


