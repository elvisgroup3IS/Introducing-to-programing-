#include <iostream>
using namespace std;
void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
}

void printString(char *array)
{
    for (int i = 0; *(array + i) != '\0'; i++)
    {
        cout << *(array + i) << " ";
    }
}

int *halfSizeCopy(int *array, int size)
{
    int *newArray = new int[size / 2 - 1];
    for (int i = 0; i < size / 2; i++)
    {
        *(newArray + i) = *(array + i);
    }
    return newArray;
}

void fillGrades()
{
    int teachersSize;
    cin >> teachersSize;
    int **teachersGrades = new int *[teachersSize];
    int grades;
    cout << "Enter grades";
    cin >> grades;
    for (int i = 0; i < teachersSize; i++)
    {
        teachersGrades[i] = new int[grades];
        for (int j = 0; j < grades; j++)
        {
            cin >> teachersGrades[i][j];
        }
    }
    for (int i = 0; i < teachersSize; i++)
    {
        for (int j = 0; j < grades; j++)
        {
            cout << teachersGrades[i][j];
        }
        cout << endl;
    }
    delete[] teachersGrades;
}

int *arrayResize(int *array, int size, int newSize)
{
    int *newArray = new int[newSize];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }
    return newArray;
}

int *arrayCopy(int *array, int size)
{
    int *newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }
    return newArray;
}

int numberCount(int number)
{
    if (number == 0)
    {
        return 0;
    }
    return 1 + numberCount(number / 10);
}

char *numberToString(int number)
{
    int size = numberCount(number);
    char *newString = new char[size];
    for (int i = 0; number != 0; i++)
    {
        *(newString + size - i - 1) = '0' + number % 10;
        number /= 10;
    }
    for (int i = 0; i < size; i++)
    {
    }
    return newString;
}

int main()
{
    // Task 2
    int array[6] = {1, 6, 2, 9, 5, 6};
    int size = 6;
    int *newArray = halfSizeCopy(array, size);
    printArray(newArray, size / 2);
    delete[] newArray;

    // Task 3
    fillGrades();

    // Task 4
    int newSize;
    cout << "enter newSize";
    cin >> newSize;
    newArray = arrayResize(array, size, newSize);
    printArray(newArray, newSize);
    delete[] newArray;

    // Task 5
    newArray = arrayCopy(array, size);
    printArray(newArray, size);
    delete[] newArray;

    //Task 6
    int number;
    cout << "enter number";
    cin >> number;
    char *string = numberToString(number);
    printString(string);
    delete[] string;
}