#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int A[3][3]= { {13,40,51},{10,11,12},{15,16,17}};
    int sum=0;

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            if(row<=col)
            {
                sum=sum+A[row][col];

            }
        }

    }

    cout<<"sum of upper triangular elements  ="<<sum<<endl;


    sum=0;

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            if(row>=col)
            {
                sum=sum+A[row][col];

            }
        }

    }

    cout<<"sum of lower triangular elements  ="<<sum;






    getch();
}

