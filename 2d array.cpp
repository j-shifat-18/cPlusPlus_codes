#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    /* int a[2][3]={ {105,200,300},{600,650,100} };



     a[0][0]=105;
     a[0][1]=200;
     a[0][2]=300;

     a[1][0]=600;
     a[1][1]=650;
     a[1][2]=100;

     */

    //gettig input
    int A[2][3];

    cout<<"enter the elements for matrix"<<endl;

    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<"A["<<row<<"]["<<col<<"] :";
            cin>>A[row][col];
        }
        cout<<endl;
    }

    cout<<"Matrix:-"<<endl;

    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }





    getch();
}
