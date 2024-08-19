#include<iostream>
#include<conio.h>

int main()
{
    double temp;
    char unit;

    std::cout<<"*******TEMPERATURE CONVERSION******\n";
    std::cout<<"F=Fahrenheit\n";
    std::cout<<"C=celsius\n";

    while(1){
        std::cout<<"what unit you would to like to convert to= ";
        std::cin>>unit;

    if(unit=='F' || unit =='f'){

        std::cout<<"Enter the temperature in celsius= ";
        std::cin>>temp;

        temp=(1.8*temp)+32;
        std::cout<<"temperature is = "<<temp<<"\n";
  
    }

    else if (unit == 'C' || unit =='c'){

         std::cout<<"Enter the temperature in Fahrenheit= ";
        std::cin>>temp;

        temp=(temp-32)/1.8;
        std::cout<<"temperature is = "<<temp<<"\n";


    }

    else{

        std::cout<<"please enter in only C or F \n";
    }

    std::cout<<"\n";





    }
  



    return 0;
}