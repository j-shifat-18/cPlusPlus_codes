#include <iostream>

int showIndex(std::string array[], int size, std::string name);

int main()
{
    while (1)
    {
        std::string names[] = {"shifat", "nadia", "nafiz", "faria"};
        int size = sizeof(names) / sizeof(names[0]);
        int index;
        std::string userName;

        std::cout << "Enter the name you want to search:";
        std::getline(std::cin, userName);

        index = showIndex(names, size, userName);

        if (index != -1)
        {
            std::cout << userName << " is at index " << index << "\n";
        }
        else
        {
            std::cout << "Name not found!!\n";
        }
    }

    return 0;
}

int showIndex(std::string array[], int size, std::string name)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == name)
        {
            return i;
        }
    }
    return -1;
}