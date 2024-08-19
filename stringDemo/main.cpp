#include <iostream>
#include<stdio.h>
#include<cstring> // for using those library function  below ,should use this header file
#include<conio.h>

using namespace std;

int main()
{
    char name1[30];
    char name2[30];

    cout<<"enter your name:";
    gets(name1);
    cout<<"welcome "<<name1 <<endl;

    int length = strlen(name1 );   // strlen() is a library function,
    cout <<"length of the string ="<<length<<endl;

    strcpy(name2,name1); //to copy string to another string
    cout<<"name2 = "<<name2<<endl;


    //strcat()--to add strings together

    char name3[]="jahirul ";
    char name4[]="islam";

    strcat(name3,name4);
    cout<<"strcat ="<<name3<<endl;

    //string upper & string lower

    strupr(name1);
    cout<<"string upper ="<<name1<<endl;

    strlwr(name1);
    cout<<"string lower ="<<name1<<endl<<endl;

    //string compare

    char name5[20],name6[20];
    cout<<"Enter  string 1:";
    gets(name5);
    cout<<"Enter  string 2:";
    gets(name6);

    int value = strcmp(name5,name6);

    if (value == 0)
    {
        cout<<"Strings are same ."<<endl;
    }
    else
    {
        cout<<"strings are not same ."<<endl;
    }




    getch();
}
