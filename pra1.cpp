#include<iostream>
#include<ctime>



int main()
{

    while (1){

         srand(time(NULL));

    int num1=rand()%10 + 1;

    int inputNumber;
    std::cout<<"ENter a number between 1-10:"
    std::cin

    if (inputNumber == num1){

        std::cout<<"YOU WON.****";
    }
    else{
        std::cout<<"TRY AGAIN.\n Randiom number is "<<num1<<'\n';
    }



    }


    return 0;
}
