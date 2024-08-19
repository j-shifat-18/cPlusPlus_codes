//1-2+3-4+....n
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,n,sum=0,temp;
    cout<<"enter the last number:";
    cin>>n;

     for(i=1;i<=n;i++)
     {
        if(i%2==0)
          {
              temp=(-i);

          }
        else
          {
               temp=i;
          }
       sum=sum+temp;
     }

    cout<<sum<<endl;

//2 way te kora ache


    int even=0,odd=0;
      for(i=1;i<=n;i++)
      {
          if (i%2==0)
            even=even+i;
          else
            odd=odd+i;
      }
      cout<<(odd-even);

    getch();
}
