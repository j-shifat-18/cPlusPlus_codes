#include<iostream>

class task{
    public :
        double area;
        double  volume; 

};
class circle : public task {
    public : 
        double  radius;

        circle(double radius){
            this-> radius = radius;
            this->area = 3.1416 * (radius * radius) ;
            this-> volume = (4/3.0) * 3.1416 * radius * radius * radius ;

        }
};
class square : public task {
    public :
    double length;

    square(double length ){
        this->length =  length;
        this->area = length * length;
        
    }
};

int main()
{
    circle circle(4);
    square square(4);

    std::cout<<"Area = "<<circle.area <<"\n"; 
    std::cout<<"Area = "<<circle.volume <<"\n";
    
    std::cout<<"Area = "<<square.area <<"\n";  



    return 0;
}