#include<iostream>

int factorial(int num);
int main()
{
    int num;
    std::cout<<"Enter a integer number:";
    std::cin>>num;
    std::cout<<"Factorial:"<<factorial(num);


    return 0;
}
int factorial(int num){
    int result = 1 ;
    if(num>1)
    {
        return num * factorial(num-1);
    }
    else 
    {
        return 1;
    }
}

