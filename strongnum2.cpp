#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,i,rem,sum=0,initialnum,finalnum,temp,fact;
    cout<<"enter initial  number :";
    cin>>initialnum;
    cout<<"enter final  number :";
    cin>>finalnum;

   for(i=initialnum;i<=finalnum;i++)
   {
       temp=i;

        while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
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





