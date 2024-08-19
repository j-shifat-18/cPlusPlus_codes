#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{

    while(1)
{
    int n,i,randomNumber;
    cout<<"ENTER ANY NUMBER FROM 1 TO 10:";
    cin>>n;

    randomNumber = rand()%10+1;

        if(n==randomNumber)
        {
            cout<<"CONGRATULATIONS ! YOU HAVE WON."<<endl;
            break;

        }
        else
        {
            cout<<"RANDOM NUMBER IS "<<randomNumber<<". TRY AGAIN."<<endl;

        }

        cout<<endl;

        
    }

    




    getch();
}
