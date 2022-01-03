#include <iostream>
using namespace std;
int const SIZE = 10;
void fillMatrix(int Matrix[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter numbter[" << i + 1 << "][" << j + 1 << "] of matrix" << endl;
            cin >> Matrix[i][j];
        }
    }
}

void printMatrix(int Matrix[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void fillArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number" << i << "of the list";
        cin >> array[i];
    }
}

void interestingNumbers(int array[], int size)
{
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        flag = true;
        while (array[i] > 0)
        {
            if (array[i] % 10 < array[i] % 100 / 10)
            {
                flag = false;
            }
            array[i] /= 10;
        }
        if (flag)
        {
            cout << "yes";
        }
        else
            cout << "no";
    }
}

void transposeMatrix(int matrix[][SIZE], int rows, int cols) //Task 1
{
    int transposeMatrix[SIZE][SIZE];
    transposeMatrix[cols][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
    printMatrix(transposeMatrix, cols, rows);
}

bool sSymmetric(int matrix[SIZE][SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] != matrix[j][i])
                return false;
        }
    }
    return true;
}
int main()
{
    // Task 1;
    int matrix[SIZE][SIZE];
    int rows, cols;
    cout << "enter rows to matrix";
    cin >> rows;
    cout << "enter cols to matrix";
    cin >> cols;
    matrix[rows][cols];
    fillMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    transposeMatrix(matrix, rows, cols);

    //Task 2
    int matrix[SIZE][SIZE];
    int size;
    cout << "Enter size";
    cin >> size;
    matrix[size][size];
    fillMatrix(matrix, size, size);
    cout << boolalpha << sSymmetric(matrix, size);

    //Task 1
    int array[SIZE];
    int size;
    cout << "Enter number of numbers";
    cin >> size;
    array[size];
    fillArray(array, size);
    interestingNumbers(array, size);
}
