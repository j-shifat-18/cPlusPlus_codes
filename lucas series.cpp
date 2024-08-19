#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,count=0,first=2,second=1,lucas;
    cout<<"enter the last number :";
    cin>>n;

    while(count<n)
    {
        if(count==0)
        {
            lucas=2;
        }
        else if(count==1)
        {
            lucas=1;
        }
        else

        {
            lucas=first+second;
            first=second;
            second=lucas;
        }

       cout<<lucas<<" ";
       count++;
    }





    getch();
}

