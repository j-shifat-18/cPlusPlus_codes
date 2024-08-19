#include <iostream>

int getDigit(const int number);
int sum_odd_digits(std::string cardNumber);
int sum_even_digits(std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter an credit card number : ";
    std::cin >> cardNumber;

    result = sum_even_digits(cardNumber) + sum_odd_digits(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << cardNumber << " is valid.\n";
    }
    else
    {
        std::cout << cardNumber << " is not valid.";
    }

    return 0;
}
int getDigit(const int number)
{
    return (number % 10) + ((number / 10) % 10);
}
int sum_odd_digits(std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum = sum + (cardNumber[i] - '0');
    }
    return sum;
}
int sum_even_digits(std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum = sum + getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
