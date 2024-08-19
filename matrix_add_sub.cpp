#include <iostream>

void getMatrix(int matrix[3][3]);
void showMatrix(int matrix[3][3]);

int main()
{

    int matrix1[3][3];
    std::cout << "Enter the elements for matrix 1:\n";
    getMatrix(matrix1);

    int matrix2[3][3];
    std::cout << "\nnter the elements for matrix 2:\n";
    getMatrix(matrix2);

    std::cout << "\n\nMatrix1--\n";
    showMatrix(matrix1);

    std::cout << "\n\nMatrix2--\n";
    showMatrix(matrix2);

    while (1)
    {
        int matrix_result[3][3];
        char op;
        std::cout << "\n\nFor matrix addition enter '+'\nFor matrix subtraction enter '-' :";
        std::cin >> op;

        switch (op)
        {
        case '+':
            std::cout << "\n\nMatrix result--\n";

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matrix_result[i][j] = matrix1[i][j] + matrix2[i][j];
                    std::cout << matrix_result[i][j] << " ";
                }
                std::cout << "\n";
            }
            break;

        case '-':
            std::cout << "\n\nMatrix result--\n";

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matrix_result[i][j] = matrix1[i][j] - matrix2[i][j];
                    std::cout << matrix_result[i][j] << " ";
                }
                std::cout << "\n";
            }
            break;

        default:
            std::cout << "Enter a valid operator (+/-)";
        }
    }

    return 0;
}

void getMatrix(int matrix[3][3])
{
    int row, col;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cout << "A[" << row << "]" << "[" << col << "]:";
            std::cin >> matrix[row][col];
        }
    }
}
void showMatrix(int matrix[3][3])
{
    int row, col;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cout << matrix[row][col] << " ";
        }
        std::cout << "\n";
    }
}
