#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num;
    cout<<"enter an integer number= ";
    cin>>num;

    if (num%2==0)
    {
        cout<<"the number is even."<<endl;

    }
    else{
        cout<<"the number is odd."<<endl;
    }



   int num1,num2;
    cout<<"enter 2 number:";
    cin>>num1>>num2;

    if (num1>num2)
    {
        cout<<"large="<<num1<<endl;
    }
    else {
        cout<<"large="<<num2<<endl;
    }


   int mark;
   cout<<"enter your mark=";
   cin>>mark;

   if (mark>=33)
   {
       cout<<"congratulations .you passed!"<<endl;
   }
   else{
    cout<<"failed."<<endl;
   }



   int num3;
   cout <<"enter any integer number=";
   cin>>num3;

   if (num3<0)
   {
       cout<<"the absolute value of the number is ="<<(-num3)<<endl;
   }
   else {
    cout<<"the absolute value of the number is ="<<num3;
   }




    getch();
}
