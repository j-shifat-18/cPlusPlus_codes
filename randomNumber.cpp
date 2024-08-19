#include<iostream>
#include<ctime>



int main()
{
    
    while (1){

         srand(time(0));

    int num1=rand()%5 + 1;

    int inputNumber;
    std::cout<<"ENter a number between 1-5:";
    std::cin>>inputNumber;

    if (inputNumber == num1){

        std::cout<<"YOU WON.****"<<"\n\n";
    }
    else{
        std::cout<<"TRY AGAIN.\nRandiom number is "<<num1<<'\n'<<'\n';
    }



    }
   

    return 0;
}