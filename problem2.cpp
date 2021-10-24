#include<iostream>
using namespace std;
main()
{
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

}