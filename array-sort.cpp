#include <iostream>

void sort(int array[], int size);

int main()
{
    int numbers[] = {10, 8, 7, 5, 6, 4, 3, 2, 9, 0, 1};
    int size=sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);

    for (int element : numbers)
    {
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size)
{

    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if(array[j]>array[j+1]){
                
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;

            }

        }
    }
}