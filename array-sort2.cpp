#include <iostream>

void showSort(int array[], int size);

int main()
{
    int marks[] = {15, 65, 100, 98, 45, 75, 63, 41, 35, 76, 78, 94};
    int size = sizeof(marks) / sizeof(marks[0]);

    showSort(marks, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << marks[i] << " ";
    }

    return 0;
}
void showSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}