#include<iostream>

struct car{
    std::string model;
    int price;
    std::string clr;
};

void show(car &car);
void paint_car(car &car , std::string color);

int main()
{
    car car1;
    car car2;

    car1.model = "MARCEDES";
    car1.clr = "WHITE";
    car1.price = 10000000;

    car2.model = "PRADO";
    car2.clr = "BLACK";
    car2.price = 60000000;
    
    std::cout<<&car1<<"\n";
    paint_car(car1 , "red");
    show(car1);

    std::cout<<&car2<<"\n";
    paint_car(car2 , "blue");
    show(car2);


    return 0;
}

void show(car &car){
    std::cout<<&car<<"\n";
    std::cout<<car.model<<"\n";
    std::cout<<car.clr<<"\n";
    std::cout<<car.price<<"\n";
}
void paint_car(car &car , std::string color){
    car.clr = color;

}