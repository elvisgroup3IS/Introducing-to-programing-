#include <iostream>
using namespace std;
int stringLenght(char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
}

void onlyLeters(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z'))
        {
            cout << string[i];
        }
    }
}

void onlyNumbers(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            cout << string[i];
        }
    }
}

void onlysimbols(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '.' || string[i] == ',' || string[i] == '!' || string[i] == '?' || string[i] == '(' || string[i] == ')' || string[i] == '[' || string[i] == ']' || string[i] == '{' || string[i] == '}' || string[i] == '+' || string[i] == '-')
        {
            cout << string[i];
        }
    }
}
void hakerski(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] = string[i] - 'a' + 'A';
    }
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'A')
            string[i] = '4';
    }
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'E')
            string[i] = '3';
    }
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'I')
            string[i] = '1';
    }
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '0')
            string[i] = '1';
    }
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
            string[i] = '_';
    }
}

void printString(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        cout << string[i] << " ";
    }
    cout << endl;
}

char *stringCatNew(char *firstString, char *secondString)
{
    char *stringCat = new char[stringLenght(firstString) + stringLenght(secondString) + 2];
    for (int i = 0; firstString[i] != '\0'; i++)
    {
        stringCat[i] = firstString[i];
    }
    stringCat[stringLenght(firstString)] = '_';
    for (int i = 0; secondString[i] != '\0'; ++i)
    {
        stringCat[i + stringLenght(firstString) + 1] = secondString[i];
    }
    return stringCat;
}

int main()
{
    // Task 1
    int number;
    char string[256];
    cin.getline(string, 256);
    cout << "Enter number";
    cin >> number;
    switch (number)
    {
    case 1:
        onlyLeters(string);
        break;
    case 2:
        onlyNumbers(string);
        break;
    case 3:
        onlysimbols(string);
        break;
    default:
        cout << "Please enter a valid number!";
    }

    // Task 2
    char string[256];
    cin.getline(string, 256);
    hakerski(string);
    printString(string);

    //Task 3
    char firstString[256], secondString[256];
    cin.getline(firstString, 256);
    cin.getline(secondString, 256);
    char *newString = stringCatNew(firstString, secondString);
    printString(newString);
    delete[] newString;
}
