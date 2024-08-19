#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,sum=0;

    cout<<"enter students number:";
    cin>>n;

    int marks[n];

    //input
    for(int i=0;i<n;i++)
    {
        cout<<"mark of student "<<i+1<<"=";
        cin>>marks[i];
        sum=sum+marks[i];
    }

    cout<<"total marks="<<sum<<endl;

    float avg=(float) sum/n;

    cout<<"average="<<avg<<endl;


    int max=marks[0];

    int min=marks[0];

    for(int i=1;i<n;i++)
    {
        if(max<marks[i])
        {
            max=marks[i];
        }

        if(min>marks[i])
        {
            min=marks[i];
        }
    }

    cout<<"highest mark="<<max<<endl;
    cout<<"lowest mark="<<min;






    getch();
}











