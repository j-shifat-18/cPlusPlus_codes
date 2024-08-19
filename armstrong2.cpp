#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
   int initialnum,finalnum,i,temp,r,sum=0;
   cout<<"enter initial number :";
   cin>>initialnum;
    cout<<"enter final number :";
   cin>>finalnum;

    for(i=initialnum;i<=finalnum;i++)
    {

        temp=i;

        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(sum==i)
       {
         cout<<sum<<endl;
       }
      sum=0;
    }

    getch();
}
