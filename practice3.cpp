#include<iostream>
#include<conio.h>


using namespace std;

int main()
{

    char name[20];
    cout<<"please give your name:";
    cin>>name;
    cout<<"welcome "<<name <<endl;

    float num1,num2,sum;
    cout<<"please input 2 numbers: ";

    cin>>num1>>num2;
    sum=num1+num2;
    cout<<"the sum of the numbers are="<<sum;

    getch();
}
