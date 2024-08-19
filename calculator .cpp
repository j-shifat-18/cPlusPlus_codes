#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{

    cout<<"********CALCULATOR********"<<endl;

    while (1)
    {
        double  num1,num2;
        double result ;
        char op;

/*
        cout<<"enter the first number  :";
        cin>>num1;

        cout<<"enter the second number  :";
        cin>>num2;

        cout<<"enter the arithmatic operator(+,-,*,/)  :";
        cin>>op;


*/

      cout <<"TYPE THE OPERATION YOU WANT TO RUN :"<<endl;

       cin>>num1>>op>>num2;




        switch(op)
        {
        case '+':
            result = num1+num2;
            break;

        case '-':
            result = num1-num2;
            break;

        case '*':
            result = num1*num2;
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1/num2;
                break;
            }
            else
            {
                cout<<"ERROR : DIVISION BY ZERO !"<<endl<<endl;
                continue;
            }



        default :
            cout<<"ERROR: INVALID OPERATOR ."<<endl<<"PLEASE WITH A VALID OPERATOR ."<<endl<<endl;
            return 1;


        }

        cout<<"The result is ="<<result <<endl <<endl;


    }



    getch();
}
