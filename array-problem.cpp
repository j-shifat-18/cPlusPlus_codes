#include<iostream>

int main()
{
    int array[20];
    int element;

    std::cout<<"Enter element number:";
    std::cin>>element;
    std::cout<<"Enter the elements separated by space:";

    for(int i=1;i<=element;i++)
    {
        std::cin>>array[i];
    }

    std::cout<<array[3];


    return 0;
}