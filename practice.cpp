#include<iostream>

void happyBirthday(std::string name, int age){

    std::cout<<"HAPPY BIRTHDAY TO "<<name<<"\n";
    std::cout<<"HAPPY BIRTHDAY TO "<<name<<"\n";
    std::cout<<"HAPPY BIRTHDAY DEAR "<<name<<"\n";
    std::cout<<"HAPPY BIRTHDAY TO "<<name<<"\n";
    std::cout<<"You are "<<age<<" years old\n";



}

int main()
{
    std::string name;
    std::cout<<"What is your name: ";
    std::getline(std::cin,name);

    int age;
    std::cout<<"What is your age: ";
    std::cin>>age;

    happyBirthday(name,age);





    return 0;
}