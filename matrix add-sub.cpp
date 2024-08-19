#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int A[3][3]={ {3,4,5},{10,11,12},{15,16,17}};
    int B[3][3]={{9,10,11},{12,13,15},{10,12,19}};


     cout<<"Addition:"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<A[row][col]+B[row][col]<<" ";
        }
        cout<<endl;
    }

     cout<<endl<<"subtraction:"<<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<A[row][col]-B[row][col]<<" ";
        }
        cout<<endl;
    }












    getch();
}
