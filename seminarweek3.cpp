#include <iostream>
using namespace std;
int main()
{
    // Task 1
    int number, first, second, third, fourth;
    cout << "Enter number";
    cin >> number;
    first = number / 1000;
    cout << first << endl;
    second = number / 100 % 10;
    cout << second << endl;
    third = number % 100 / 10;
    cout << third << endl;
    fourth = number % 10;
    cout << fourth << endl;
    bool isuniqeDigits = !(first == second) &&
                         !(second == third) &&
                         !(third == fourth) &&
                         !(fourth == first) &&
                         !(first == third) &&
                         !(second == fourth);
    cout << boolalpha << isuniqeDigits;

    // Task 2
    int number, secondNumber, thirdNumber;
    cout << "Enter number";
    cin >> number;
    cout << "Enter number";
    cin >> secondNumber;
    cout << "Enter number";
    cin >> thirdNumber;
    int max = number;
    if (max < secondNumber)
    {
        max = secondNumber;
    }
    if (max < thirdNumber)
    {
        max = thirdNumber;
    }
    cout << max;

    if (number > secondNumber && number > thirdNumber)
        cout << number;
    if (number < secondNumber && secondNumber > thirdNumber)
        cout << secondNumber;
    if (thirdNumber > number && secondNumber < thirdNumber)
        cout << thirdNumber;

    // Task 3
    int a, b, c;
    cout << "enter a";
    cin >> a;
    cout << "enter b";
    cin >> b;
    cout << "enter c";
    cin >> c;
    if (a + b <= c || a + c <= b || c + b <= a)
    {
        cout << "Isnt exhist";
        return 0;
    }
    if (a == b && b == c && a == c)
    {
        cout << "equilateral";
    }
    if (a == b || b == c || c == a)
    {
        cout << "isosceles";
    }
}