#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int A[3][3]= { {13,40,51},{10,11,12},{15,16,17}};



    cout<<"Matrix:"<<endl;
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }


    cout<<"Transpose Matrix:"<<endl;
    for(int col=0;col<3;col++)

    {
        for(int row=0; row<3; row++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }





    getch();
}

