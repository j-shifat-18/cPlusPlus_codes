#include <iostream>
#include <ctime>

int main()
{
    while (1)
    {
        int num, guess, tries;

        srand(time(NULL));
        num = (rand() % 100) + 1;

        std::cout << "*************GUESSING GAME*************\n";

        do
        {
            std::cout << "Enter a guess between (1-100): ";
            std::cin >> guess;
            tries++;

            if (num < guess)
            {
                std::cout << " HIGH!!!!\n";
            }
            else if (num > guess)
            {
                std::cout << " LOW!!!!!\n";
            }
            else
            {
                std::cout << "CORRECT! #of tries :" << tries << "\n";
            }

        } while (num != guess);

        std::cout << "*****************************\n";

        tries=0;

        
    }
    return 0;
}