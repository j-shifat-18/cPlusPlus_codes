#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    cout<<"enter any letter:";
    cin>>ch;
    ch=tolower(ch);

    switch (ch)
    {
        case 'a':
            cout<<"vowel";
            break;

        case 'e':
        case 'i':
        case 'o':
        case 'u':

            cout<<"vowel";

        default :
            cout<<"consonant";



    }


    getch();
}
