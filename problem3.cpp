#include<iostream>
using namespace std;
main()
{
    int numeral,number1,number2,number3,sum;
    cout<<"Enter numeral";
    cin>>numeral;
    number1=numeral%10;
    cout<<"number3 is "<< number1<<endl;
    number2=numeral/10%10;
    cout<<"number2 is "<<number2<<endl;
    number3=numeral/100;
    cout<<"number1 is "<<number3<<endl;
    sum=number1+number2+number3;
    cout<<sum;
    return 0;
}