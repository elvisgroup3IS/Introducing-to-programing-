#include<iostream>
using namespace std;
void printArray(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<*(array+i)<<" ";
    }
}

int *sinmbolPushInTheEnd(int *array,int &size,int number)
{
    int *newArray=new int[size+1];
    *(newArray+size)=number;
    for(int i=0;i<size;i++)
    {
        *(newArray+i)=*(array+i);
    }
    size=size+1;
    for(int i=0;i<size;i++)
    {
        *(array+i)=*(newArray+i);
    }
    delete[] newArray;
}

void sinmbolPushInTheBeginning(int *array,int &size,int number)
{
    int *newArray=new int[size+1];
    *(newArray)=number;
    for(int i=1;i<size+1;i++)
    {
        *(newArray+i)=*(array+i-1);
    }
    size=size+1;
    for(int i=0;i<size;i++)
    {
        *(array+i)=*(newArray+i);
    }
    delete[] newArray;
}

void fillArray(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element ["<<i<<"] of array"<<endl;
        cin>>*(array+i);
    }
}

void arrayCopy(int *array,int &size,int *userArray,int &userArraySize)
{
    size=userArraySize;
    for(int i=0;i<size;i++)
    {
        *(array+i)=*(userArray+i);
    }
}

void swap(int &firstelement ,int &secondelement)
{
    int temp;
    temp=firstelement;
    firstelement=secondelement;
    secondelement=temp;
}

void deletefirstElement(int *array,int &size)
{
    swap(*(array),*(array+size-1));
    size-=1;
    for(int i=0;i<size-1;i++)
    {
        swap(*(array+i),*(array+i+1));
    }
}


int main()
{
    int array[]={2,3,5,1,5,6};
    int size=6;
    int choose; 

    do
    {
    int choose;
    cout<<"Enter 0 for end the program."<<endl;
    cout<<"Enter 1 for push back."<<endl;
    cout<<"Enter 2 push front."<<endl;
    cout<<"Enter 3 for copy."<<endl;
    cout<<"Enter 4 for pop_back."<<endl;
    cout<<"Enter 5 forpop_front."<<endl;
    cin>>choose;
    switch(choose)
    {
        case 0: printArray(array,size);
        return 0;
        case 1:
        {
            int number;
            cout<<"Enter nuumber to push in the end of array";
            cin>>number;
            sinmbolPushInTheEnd(array,size,number);
            printArray(array,size);
        } 
        break;
        case 2:
        {
            int number;
            cout<<"Enter nuumber to push in the begining of array";
            cin>>number;
            sinmbolPushInTheBeginning(array,size,number);
            printArray(array,size);
        } 
        break;
        case 3:
        {
            int userArray[10],userArraySize;
            cout<<"Enter size of new array";
            cin>>userArraySize;
            userArray[size];
            fillArray(userArray,userArraySize);
            arrayCopy(array,size,userArray,userArraySize);
        }
        break;
        case 4:
        {
            size--;
            printArray(array,size);
        }
        break;
        case 5:
        {
            deletefirstElement(array,size);
            printArray(array,size);
        }
        break;
    }
    cout<<endl;
    }
    while(choose!=0); 
}