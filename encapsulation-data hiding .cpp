#include<iostream>
#include<conio.h>

using namespace std;

class data
{
private :
    int id ;
    string name;
public:
  void setId(int x, string y)
    {
        id=x;
        name=y;

    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }




};

int main()
{
    data s1;

    s1.setId(25,"shifat");
    cout <<s1.getId()<<endl <<s1.getName();







    getch ();
}
