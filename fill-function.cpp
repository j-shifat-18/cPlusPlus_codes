#include <iostream>

int main()
{
    /*
    fil ()= fills a range of elements with a specified value
    fill(begin,end,value);

    */

    int size = 100;
    std::string foods[size];

    fill(foods, foods + (size / 4), "burger");
    fill(foods + (size / 4), foods + (size / 4) * 2, "pizza");
    fill(foods + (size / 4) * 2, foods + (size / 4) * 3, "chicken");
    fill(foods + (size / 4) * 3, foods + size, "sauce");

    for (std::string food : foods)
    {
        std::cout << food << "\n";
    }

    return 0;
}