#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,array1[30],array2[30],n;
    cout<<"enter how many numbers you wants to see:";
    cin>>n;
    cout<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"element "<<i+1<<"=";

        cin>>array1[i];
    }

    cout<<"array1;";
    for(i=0;i<n;i++)
    {
        cout<<array1[i]<<" ";
    }

    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }

    cout<<endl<<"array2:";
    for(i=0;i<n;i++)
    {
        cout<<array2[i]<<" ";
    }








    getch();
}
