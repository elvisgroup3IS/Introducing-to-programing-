#include<iostream>
#include<cmath>
using namespace std;
bool isValidTime(int time) 
{
    int minutes = time % 100;
    int hours = time / 100;

    bool hasValidMinutes = minutes >= 0 && minutes <= 59;
    bool hasValidHours = hours >= 0 && hours <= 23;

    return hasValidHours && hasValidMinutes; 
}

void differenceBetweenTimes(int time1, int time2) {
    int time1Minutes = time1 % 100;
    int time1Hours = time1 / 100;

    int time2Minutes = time2 % 100;
    int time2Hours = time2 / 100;



    if (isValidTime(time1) && isValidTime(time2)) {
        time1Minutes += time1Hours * 60;
        time2Minutes += time2Hours * 60;

        if (time2Minutes < time1Minutes) {
            time2Minutes += 24 * 60;
        }

        int difference = time2Minutes - time1Minutes;

        int differenceMinutes = difference % 60;
        int differenceHours = difference / 60;

        if (differenceHours < 10) {
            cout << 0;
        }
        cout << differenceHours;

        if (differenceMinutes < 10) {
            cout << 0;
        }
        cout << differenceMinutes;
    }
}

main()
{  
// Task 0
  //да се намери дали в записа на едно число има 1;
  int number;
  cout<<"Enter number";
  cin>>number;
  while(number>0)
  {
      if(number%10==1)
      {
          cout<<"yes";
          return 0;
      }
      number/=10;
  }
  cout<<"No";
  //същата само че с флаг
     int number;
     bool flag=false;
  cout<<"Enter number";
  cin>>number;
  while(number>0&&!flag)
  {
      if(number%10==1)
      {
          flag=true;
      }
      number/=10;
  }
  cout<<boolalpha<<flag;

  // Task 1
  int time1, time2;
  cout << "Enter time 1: ";
  cin >> time1;

  cout << "Enter time 2: ";
  cin >> time2;

  differenceBetweenTimes(time1,time2);


  // Task 2
  int firstNumber,secondNumber;
  cout<<"Enter number";
  cin>>firstNumber;
  cout<<"Enter number";
  cin>>secondNumber;
  bool flag=false;
  for(int i=2;i<firstNumber;i++) 
  {
    if(firstNumber % i == 0)
    {
      if(secondNumber % (i*i) == 0)
      {
        flag=true;
        break;
      }
    }
  }
  if(flag)
  {
    cout<<"yes";
  }else
  {
  cout<<"no";
  }

  //Task 3
  int price,mileage,power;
  bool hasClima,isNewOrOld;
  cout<<"Enter price"<<endl;
  cin>>price;
  cout<<"Enter milage"<<endl;
  cin>>mileage;
  cout<<"Enter power"<<endl;
  cin>>power;
  cout<<"if the car is new enter 1 else enter 0"<<endl;
  cin>>isNewOrOld;
  cout<<"if the car has climatik entter 1 esle enter 0"<<endl;
  cin>>hasClima;
  cout<<boolalpha<<(!isNewOrOld && (hasClima==true)&& mileage<115000 && power>=70 && price<=6000)
                   ||(!isNewOrOld||(hasClima==false)&& mileage<180000 && power>=60 && price<=2000)
                   || (isNewOrOld) && power>=70 && power<=90 && price<=25000;

  // Task 4
  int numberOfPeoples;
  double price;
  cout<<"Enter number of people"<<endl;
  cin>>numberOfPeoples;
  cout<<"Enter price"<<endl;
  cin>>price;
  if(numberOfPeoples>=5&& numberOfPeoples<=10)
  {
      price=price-((price/10)/2);
      cout<<"The price is="<<price*numberOfPeoples;
  }
  if(numberOfPeoples>=10 && numberOfPeoples<=20)
  {
      price=price-price/10;
      cout<<"The price is="<<price*numberOfPeoples;
  }
  if(numberOfPeoples>=21)
  {
      price=price-(price/10+(price/10)/2);
      cout<<"The price is="<<price*numberOfPeoples;
  }

  // Task 5
  int number;
  cout<<"Enter number";
  cin>>number;
  for(int i=0;i<number+1;i++)
  {
      for(int j=0;j<i;j++)
      {
          cout<<i;
      }
  }


  //Task 6
//     * * * * * * * * * *
//    **             *  *
//   * *             * *
//  *  *             **
// * * * * * * * * * *
    int number,row=0;
    cout<<"enter number";
    cin>>number;
    for(int i=1;i<number;i++)
    {
        cout<<" ";
    }
    for(int i=0;i<number*2;i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    //osnovna chast
    for(int i=0;i<number-2;i++)
    {
            for(int row=1;row<number-i-1;row++)
        {
            cout<<" ";
        }
        cout<<"*";
            for(int row=0;row<i;row++)
        {
            cout<<" ";
        }
        cout<<"*";
           for(int row=0;row<((number*4)-(number+2));row++)
           {
               cout<<" ";
           }
        cout<<"*";
        for(int row=1;row<number-i-2;row++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
     for(int row=0;row<number*2;row++)
        cout<<"* ";
}