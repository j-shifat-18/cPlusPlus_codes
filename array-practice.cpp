#include <iostream>

void showResult(std::string name[], int mark[]);
void showSort(int array[]);

int main()
{
    std::cout<<"Enter 5 students details ---\n\n";
    std::string names[5];
    int marks[5];

    std::cout << "enter names--\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "student " << i + 1 << ":";
        std::getline(std::cin, names[i]);
    }

    std::cout << "\n\nenter marks--\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "student " << i + 1 << ":";
        std::cin >> marks[i];
    }

    std::cout << "\n\nresult--\n";

    showResult(names, marks);

    std::cout << "\n\nRank Name Mark \n";

    showSort(marks);

    for (int i = 0; i < 5; i++)
    {
        std::cout << i + 1 << ". "<< marks[i] << "\n";
    }

    return 0;
}
void showResult(std::string name[], int mark[])
{

    for (int i = 0; i < 5; i++)
    {
        std::cout << i + 1 << "." << name[i] << " " << mark[i] << "\n";
    }
}

void showSort(int array[])
{
    int temp;
    
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
