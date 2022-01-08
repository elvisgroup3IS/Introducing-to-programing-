#include <iostream>
using namespace std;
int sumOfDigits(int number)
{
    if (number == 0)
    {
        return 0;
    }
    return number % 10 + sumOfDigits(number / 10);
}
int recStrlen(const char *string)
{
    if (*string == 0)
    {
        return 0;
    }
    return 1 + recStrlen(string + 1);
}
int reverse(int number, int reverseNumber)
{
    if (number == 0)
    {
        return reverseNumber;
    }
    return reverse(number / 10, number % 10 + reverseNumber * 10);
}
int factorial(int number)
{
    if (number == 0)
    {
        return 1;
    }
    return number * factorial(number - 1);
}

bool areEqual(const char *string, char const *secondString)
{

    if (string[0] == 0 || secondString[0] == 0)
    {
        return true;
    }
    if (string[0] != secondString[0])
        return false;
    return areEqual(string + 1, secondString + 1);
}

int fib(int number, int fib1, int fib2)
{
    if (number == 0)
    {
        return fib1;
    }
    return fib(number - 1, fib1 = fib2, fib1 + fib2);
}

int minElement(int *array, int min, int size)
{
    if (size == 0)
    {
        return min;
    }
    if (array[0] < min)
    {
        min = array[0];
    }
    return minElement(array + 1, min, size - 1);
}

int binary(int number)
{
    if (number == 0)
    {
        return 1;
    }
    if (number == 1)
    {
        return 1;
    }
    return number % 2 + binary(number / 2) * 10;
}

void evaluate(const char *string, int smallLetters, int bigLetters, int numbers)
{
    if (*string == '\0')
    {
        cout << "Small leters are " << smallLetters << endl;
        cout << "Big leters are " << bigLetters << endl;
        cout << "numbers are " << numbers << endl;
        return;
    }
    if (*string >= 'a' && *string <= 'z')
    {
        smallLetters++;
    }
    if (*string >= 'A' && *string <= 'Z')
    {
        bigLetters++;
    }
    if (*string >= '1' && *string <= '9')
    {
        numbers++;
    }
    return evaluate(string + 1, smallLetters, bigLetters, numbers);
}

void swapcase(char *string)
{
    if (*string == '\0')
    {
        return;
    }
    if (*string > 'a' && *string < 'z')
    {
        *string -= 'a' - 'A';
        return swapcase(string + 1);
    }
    if (*string > 'A' && *string < 'Z')
    {
        *string += 'a' - 'A';
    }
    return swapcase(string + 1);
}

int main()
{
    // Task 0
    cout << sumOfDigits(152) << endl;
    // Task 1
    cout << recStrlen("Happy new year") << endl;
    // Task 2
    cout << reverse(1234, 0) << endl;
    // Task 3
    cout << factorial(5) << endl;
    // Task 4
    cout << boolalpha << areEqual("Hello", "Hello") << endl;
    // Task 5
    cout << fib(5, 1, 1) << endl;
    // Task 6
    int array[5] = {10, 15, 4, 15, 16};
    cout << minElement(array, 5, 5) << endl;
    // Task 7
    cout << binary(5) << endl;
    // Task 8
    char string[256];
    cin.getline(string, 256);
    swapcase(string);
    cout << string;
    // Task 9
    char string[256];
    cin.getline(string, 256);
    evaluate(string, 0, 0, 0);
}