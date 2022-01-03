#include<iostream>
using namespace std;
int pow(int firstNumber,int secondNumber)
{
    int temp=firstNumber;
    for(int i=1;i<secondNumber;i++)
    {
        temp*=firstNumber;
    }
    return temp;
}
int max(int firstNumber,int secondNumber)
{
    if(firstNumber<secondNumber)
    {
         return secondNumber;
    }
    if(firstNumber>secondNumber)
    {
        return firstNumber;
    }else
    return 0;
}

int min(int firstNumber,int secondNumber)
{
    if(firstNumber<secondNumber)
    {
         return firstNumber;
    }
    if(firstNumber>secondNumber)
    {
        return secondNumber;
    }else
    return 0;
}

double areaOfaCircle(double R)
{
    double S;
    S=3.14*R*R;
    return S;
}

   bool isPowerOfTwo(int number)//Task 3 дали то е степен на двойката
    {   
        int i=2; 
        while(number>i)
        {
            i*=2;
            if(number==i)
            {
                return true;
            }
            
        }
        return false;
    }

    
main()
{
    // // Task 1
    int firstNnumber,secondNumber;
    cout<<"Enter number";
    cin>>firstNnumber;
    cout<<"Enter pow";
    cin>>secondNumber;

    cout<<pow(firstNnumber,secondNumber)<<endl;

    cout<<max(firstNnumber,secondNumber)<<endl;

    cout<<min(firstNnumber,secondNumber)<<endl;
    
    // Task 3
    int r;
    cout<<"Enter r for a circle";
    cin>>r;
    cout<<areaOfaCircle(r);

    //Task 4
    int number;
    cout<<"Enter number";
    cin>>number;
    cout<<boolalpha<<isPowerOfTwo(number);
    



}