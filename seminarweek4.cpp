#include <iostream>
using namespace std;
main()
{
    //Task 1 faktoriel
    int n, facturiel = 1;
    cout << "Enter n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        facturiel = facturiel * i;
    }
    cout << facturiel;

    //Task 2 sum while 0;
    int number, count, sum = 0;
    bool flag = true;
    cout << "how meny numbers u want to sum";
    cin >> count;
    do
    {
        cout << "Enter number";
        cin >> number;
        if (flag)
        {
            sum = sum + number;
        }
        if (number == 0)
        {
            flag = false;
        }

        count--;
    } while (count != 0);
    cout << sum;

    //Task 3 sum of numbers
    int number, b, sum = 0;
    cout << "Enter number";
    cin >> number;
    while (number != 0)
    {
        b = number % 10;
        number /= 10;
        sum += b;
    }
    cout << sum;
    return 0;

    //Task 4 prime numbers
    int number;
    cout << "Enter number";
    cin >> number;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "no";
            break;
        }
        else
        {
            cout << "yes";
            break;
        }
    }

    // Task 5 fibonac numbers
    int number, numberfibonac = 1, update = 1;
    cout << "Enter number=";
    cin >> number;
    for (int i = 1; i < number; i++)
    {
        numberfibonac = numberfibonac + update;
        update = numberfibonac - update;
    }
    cout << numberfibonac;
    return 0;

    //Task 6 protones and electrones
    int number;
    cout << "Enter number";
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "-";
        }
        for (int j = i; j < number; j++)
        {
            cout << "+";
        }
        cout << endl;
    }
}