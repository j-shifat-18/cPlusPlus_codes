#include<iostream>

int main()
{
    std::string name;
    std::cout<<"Enter your name :";
    std::getline(std::cin,name);

    if (name.length()>12){

        std::cout<<"Your name is above 12 character.\n";

    }
    else if(name.empty()){
        std::cout<<"You did't enter your name.\n";
    }
    else {
        std::cout<<"Hello "<<name<<'\n';
    }

  
    
    std::cout<<name;

    std::cout<<name.at(0)<<'\n';

  
    std::cout<<name.insert(0,"@")<<'\n';

    std::cout<<name.find('f')<<'\n';

    std::cout<<name.erase(0,1)<<'\n';

    std::cout<<"Your username is now :"<<name.append("@gmail.com")<<'\n';

    




    return 0;
}