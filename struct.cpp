#include<iostream>

struct student{
    std::string name;
    double gpa;
    int mark;
};

int main()
{
    student  student1;
    student1.name = " shifat";
    student1.mark = 80;
    student1.gpa=4.00;

    std::cout<<student1.name<<"\n";
    std::cout<<student1.mark<<"\n";
    std::cout<<student1.gpa<<"\n";



    return 0;
}