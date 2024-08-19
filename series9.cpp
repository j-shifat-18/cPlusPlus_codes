//1*3*4+2*5*6...
#include<iostream>
#include<conio.h>
#include<cmath>


using namespace std;

int main()
{
    int i,a=1, b=3,c=4,n1,n2,n3,sum=0;
    cout<<"enter 3 number for this series:1*3*4+2*5*6...+n1*n2*n3=";
    cin>>n1>>n2>>n3;

    while(a<=n1 && b<=n2 && c<=n3)
        {

        sum=sum+a*b*c;
        a=a+1;
        b=b+2;
        c=c+2;
    }

    cout<<"1*3*4+2*5*6...+n1*n2*n3="<<sum;
 getch();


}
