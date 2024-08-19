#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    cout<<"enter any letter:";
    cin>>ch;

    ch=tolower(ch); //shob letter k lower case e niye jabe

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }

    getch();
}
