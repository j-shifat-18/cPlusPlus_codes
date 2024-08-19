#include<iostream>

enum names{shifat = 0 , nadia = 1 , nafiz = 2 };
int main()
{
    names name= shifat;

    switch(name){
        case shifat : std::cout<<"He is a good boy!";
                    break;
        case nadia : std::cout<<"good";
                    break;
        case nafiz: std::cout <<"He is a bad boy.";
                    break;  
        default: std::cout<<"Enter a valid name .";


    }

    return 0;
}