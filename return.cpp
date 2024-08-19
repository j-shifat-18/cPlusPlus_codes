#include<iostream>

double area(double length);
double cube(double length);
std:: string stringConcast(std::string string1,std::string string2);

int main()
{
    double length=10;
    double result=area(length);
    double volume=cube(length);

    std::cout<<"Area= "<<result<<"\n";
    std::cout<<"volume= "<<volume<<"\n";


    std::string firstName="jahirul";
    std::string lastName="shifat";
    std::string Concast=stringConcast(firstName,lastName);

    std::cout<<"Hello "<<Concast;




    return 0;
}

double area(double length){

    return length*length;
}
double cube(double length){
    return length*length*length;
}
std::string stringConcast(std::string string1,std::string string2){
    return string1+" "+string2;
}