#include<iostream>
using namespace std;
main()
{
    // Task 0
    cout<<"Elvis Krasimirov Spasov 7MI0700071MI";
    // Task 0
    int a,b,c,V,S;
    cout<<"Enter width";
    cin>>a;
    cout<<"Enter leght";
    cin>>b;
    cout<<"Enter height";
    cin>>c;
    V = a*b*c ;
    S = 2 * (a*b + a*c + b*c);
    cout<<"volum is "<<V;
    cout<<"area is "<<S;
    return 0;
    // Task 2
    int number, first, second, third, fourth;
    cout << "Enter number";
    cin >> number;
    first = number / 1000;
    cout << first << endl;
    second = number / 100 % 10;
    cout << second << endl;
    third = number % 100 / 10;
    cout << third << endl;
    cout<<"sum of numbers is "<<first+second+third;
    // Task 3
    double km,mph;
    cout<<"enter mph";
    mph=km*0.62;
    cout<<mph;

}