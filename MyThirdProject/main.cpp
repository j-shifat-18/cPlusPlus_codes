#include <iostream>
#include "constantobject2.h"

using namespace std;

int main()
{
    const constantobject2 sifat;
    sifat.display();

    constantobject2 sifat2;
    sifat2.nodisplay();

    return 0;
}
