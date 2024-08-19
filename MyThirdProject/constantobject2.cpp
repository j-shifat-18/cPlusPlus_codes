#include "constantobject2.h"
#include<iostream>

using namespace std;

void constantobject2::display() const
{
   cout<<"I AM CONCTANT FUNCTION."<<endl;
}

void constantobject2::nodisplay()
{
   cout<<"I AM non-CONCTANT FUNCTION."<<endl;
}
