#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
  int a=10,b=2,c;

  c=a&b; //bitwise and
  cout<<"bitwise and="<<c<<endl;

  c=a|b; //bitwise or
  cout<<"bitwise or="<<c<<endl;

  c=a^b; //bitwise xor
  cout<<"bitwise xor="<<c<<endl;


  c=~a;
  cout<<"bitwise not="<<c<<endl;

  c=a>>3;//bitwise shift right
  cout<<"bitwise shift right="<<c<<endl;

  c=a<<6;
  cout<<"bitwise shift left="<<c;



    getch();
}
