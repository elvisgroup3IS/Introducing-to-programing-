#include <iostream>
using namespace std;
void fillArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element [" << i << "] of array" << endl;
        cin >> *(array + i);
    }
}

void fillDoubleArray(double *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element [" << i << "] of array" << endl;
        cin >> *(array + i);
    }
}

void swap(int &firstelement, int &secondelement)
{
    int temp;
    temp = firstelement;
    firstelement = secondelement;
    secondelement = temp;
}
void increases(int &m, int &n)
{
    if (m > n)
    {
        do
        {
            cout << "First number isnt smaler than second." << endl;
            cout << "Enter first number again." << endl;
            cin >> m;
        } while (m > n);
    }
    while (m <= 2 * n)
    {
        m += 1;
    }
}

void reversArray(int *array, int size)
{
    int coppyArray[5];
    for (int i = 0; i < size; i++)
    {
        *(coppyArray + i) = *(array + i);
    }
    for (int i = 0; i < size; i++)
    {
        *(array + i) = *(coppyArray + size - 1 - i);
    }
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
}

void printString(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << " ";
    }
}

void sortArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (*(array + i) > *(array + j))
            {
                swap(*(array + i), *(array + j));
            }
        }
    }
}

void deleteFirstElement(int *array, int &size)
{
    swap(*(array), *(array + size - 1));
    size--;
    sortArray(array, size);
}

void sortTwoArraysAndMerger(int *firstArray, int firstsize, int *secondArray, int secondsize, int newArray[0], int &sizeOfNewArray)
{
    newArray[sizeOfNewArray];
    for (int i = 0; firstsize + secondsize > 0; i++)
    {
        if (*(firstArray) > *(secondArray))
        {
            if (firstsize == 0)
            {
                *(newArray + i) = *(secondArray);
                deleteFirstElement(secondArray, secondsize);
                sizeOfNewArray = i;
                continue;
            }
            *(newArray + i) = *(firstArray);
            deleteFirstElement(firstArray, firstsize);
        }
        else
        {
            if (secondsize == 0)
            {
                *(newArray + i) = *(firstArray);
                deleteFirstElement(firstArray, firstsize);
                sizeOfNewArray = i;
                continue;
            }
            *(newArray + i) = *(secondArray);
            deleteFirstElement(secondArray, secondsize);
        }
        sizeOfNewArray = i;
    }
    sizeOfNewArray++;
}

int therNeighboardsAritmeticalIndex(double array[], int size)
{
    int index = 0;
    for (int i = 1; i < size - 1; i++)
    {
        if (array[i] == (array[i - 1] + array[i + 1]) / 2)
        {
            index = i;
        }
    }
    return index;
}

int strlenght(char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
}

void concatstring(char firstString[], char secondString[])
{
    int firstSize = strlenght(firstString);
    int secondSize = strlenght(firstString);
    firstString[firstSize + secondSize + 1];
    for (int i = firstSize; secondString[i - firstSize] != '\0'; i++)
    {
        firstString[i] = secondString[i - firstSize];
    }
}

void deletelement(int array[], int &size, int n)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == n)
        {
            for (int j = i; j < size; j++)
            {
                array[j] = array[j + 1];
            }
            size--;
        }
    }
}

int main()
{
    int firstnumber, secondnumber;
    cout << "Enter first number";
    cin >> firstnumber;
    cout << "Enter second number";
    cin >> secondnumber;

    //Task 0 a
    swap(firstnumber, secondnumber);
    cout << firstnumber << endl
         << secondnumber;

    // Task 0 b
    increases(firstnumber, secondnumber);
    cout << firstnumber << endl
         << secondnumber;

    int sizeOfNewArray = 0;
    int array[10];
    int secondArray[10];
    int thirdArray[10];
    int size;
    int secondSize;
    cout << "Enter size of array" << endl;
    cin >> size;
    array[size];
    fillArray(array, size);
    cout << "Enter second  array size" << endl;
    cin >> secondSize;
    secondArray[secondSize];
    fillArray(secondArray, secondSize);

    //Task 1
    reversArray(array, 5);
    printArray(array, 5);

    //Task 2
    sortArray(array, size);
    printArray(array, size);

    // //Task 3
    sortArray(array, size);
    sortArray(secondArray, secondSize);
    sortTwoArraysAndMerger(array, size, secondArray, secondSize, thirdArray, sizeOfNewArray);
    printArray(thirdArray, sizeOfNewArray);

    //Task 4
    double doubleArray[10];
    int sizeOfDouleAray;
    cout << "Enter size";
    cin >> sizeOfDouleAray;
    doubleArray[sizeOfDouleAray];
    fillDoubleArray(doubleArray, sizeOfDouleAray);
    if (therNeighboardsAritmeticalIndex(doubleArray, sizeOfDouleAray))
    {
        cout << therNeighboardsAritmeticalIndex(doubleArray, sizeOfDouleAray);
    }
    else
        cout << "Not such index";

    //Task5
    int size;
    int array[10];
    cout << "Enter size of array" << endl;
    cin >> size;
    array[size];
    fillArray(array, size);
    int element;
    cout << "Enter element to delete";
    cin >> element;
    deletelement(array, size, element);
    printArray(array, size);

    //Task5 6
    char firstString[256];
    char secondString[256];
    cin.getline(firstString, 256);
    cin.getline(secondString, 256);
    concatstring(firstString, secondString);
    printString(firstString);
}