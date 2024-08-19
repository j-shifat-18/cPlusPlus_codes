#include<iostream>
#include<conio.h>

using namespace std;

void displayarray(int number[], int arraysize )
{
    for(int i=0;i<arraysize;i++)
    {
        cout<<number[i]<<" ";
    }

}

int main()
{
    int num[6]={10,12,25,12,11,4};
    displayarray(num,6);

    getch();
}
