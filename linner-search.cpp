#include <iostream>

int showIndex(int array[], int size, int input);

int main()
{
    while (1)
    {

        int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int size = sizeof(numbers) / sizeof(numbers[0]);
        int index;
        int num;

        std::cout << "Enter the number you want to search:";
        std::cin >> num;

        index = showIndex(numbers, size, num);

        if (index != -1)
        {
            std::cout << num << " is at index " << index<<"\n";
        }
        else
        {
            std::cout << "Number not found!!"<<"\n";
        }
    }

    return 0;
}

int showIndex(int array[], int size, int input)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == input)
        {
            return i;
        }
    }
    return -1;
}