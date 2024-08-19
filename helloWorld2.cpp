#include<iostream>

int main()
{
    int id;
   std::string name;
   int age;

   std::cout<<"Id:";
   std::cin>>id;

   std::cout<<"what's your name?";
   std::getline(std::cin>>std::ws,name);

   std::cout<<"what's your age?";
   std::cin>>age;

   std::cout<<"Id="<<id<<'\n';
   std::cout<<"Hello "<<name<<'\n';
   std::cout<<"you are "<<age<<"year's old.";


    return 0;
}