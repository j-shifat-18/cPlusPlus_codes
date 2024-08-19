#include <iostream>
#include<iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 120.31;
    int choice = 0;

    do
    {
        std::cout << "***********************\n";
        std::cout << "Enter your choice :\n";
        std::cout << "***********************\n"; 
        std::cout << "1.Balance cheack.\n";
        std::cout << "2.Deposit money.\n";
        std::cout << "3.cash withdraw.\n";
        std::cout << "4.Exit.\n";    
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            showBalance(balance);
            break;
        case 3:
            balance = balance - withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thank you for visiting.\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is: $" <<std::setprecision(2)<<std::fixed <<balance<<"\n\n";
}
double deposit()
{
    double amount;
    std::cout<<"Enter amount to be deposited:";
    std::cin>>amount;

    if (amount>0){
              return amount;
    }
    else{
        std::cout<<"That's not a valid amount.\n";
        return 0;
    }

  
}
double withdraw(double balance)
{
    double amount;
    std::cout<<"Enter amuont to be withdrawn:";
    std::cin>>amount;

    if(amount>balance){
        std::cout<<"Insufficient balance.\n";
        return 0;
    }
    else if (amount<0){
        std::cout<<"That's not a valid amount.\n";
        return 0;
    }
    else{
        return amount;
    }


    return 0;
}