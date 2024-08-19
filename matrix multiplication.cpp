#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j,k,r1,r2,c1,c2,first[10][10],second[10][10],result[10][10],sum=0;
    cout<<"Enter row & coloumn number for first matrix:";
    cin>>r1>>c1;
    cout<<"Enter row & coloumn number for second matrix:";
    cin>>r2>>c2;

    while(c1!=r2)
    {
        cout<<"Error!! first matrix coloumn number and second matrix row number must be same ."<<endl;
        cout<<"Enter row & coloumn number for first matrix:";
        cin>>r1>>c1;
        cout<<"Enter row & coloumn number for second matrix:";
        cin>>r2>>c2;
    }



    //taking input for first matrix
    cout<<"enter first matrix elements:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"["<<i<<"]["<<j<<"]=";
            cin>>first[i][j];
        }
    }

      //taking input for second matrix
    cout<<"enter second matrix elements:"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"["<<i<<"]["<<j<<"]=";
            cin>>second[i][j];
        }
    }


    //multiplying matrix

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }











    //output first matrix
    cout<<"first matrix elements:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {

            cout<<first[i][j]<<" ";
        }
        cout<<endl;
    }

   //output second matrix
    cout<<"second matrix elements:"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {

            cout<<second[i][j]<<" ";

        }
           cout<<endl;
    }

    //printing result
     cout<<"multiplied elements:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {

            cout<<result[i][j]<<" ";

        }
           cout<<endl;
    }







    getch();
}
