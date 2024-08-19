#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{

    while(1)
    {
         int guessnumber,randomnumber;

    cout<<"Enter your guess number 1 to 5 :";
    cin>>guessnumber;

    randomnumber = rand()%5+1;

    if (randomnumber == guessnumber)
    {

        cout<<"YOU HAVE WON!***"<<endl<<endl;

    }
    else
    {
        cout<<"YOU HAVE LOST.TRY AGAIN!"<<endl;
        cout<<"Random number is "<<randomnumber<<endl<<endl;

    }
    }


    getch();
}
