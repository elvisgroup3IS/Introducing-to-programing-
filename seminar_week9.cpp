#include<iostream>
using namespace std;
int const  SIZE = 10;
void fillArray(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element ["<<i<<"] of array"<<endl;
        cin>>*(array+i);
    }
}
void fillMatrix(int array[][SIZE],int rows ,int cows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cows;j++)
        {
            cout<<"Enter numbter["<<i+1<<"]["<<j+1<<"] of matrix"<<endl;
            cin>>array[i][j];
        }
    }
}

void printMatix(int array[][SIZE],int rows,int cows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cows;j++)
        {
            cout<<array[i][j]<<" ";
        }
    cout<<endl;
    }
}

void transposeMatrix(int matrix[][SIZE],int rows ,int cows)
{
    int transposeMatrix[2][SIZE];
    transposeMatrix[cows][rows]; 
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cows;j++)
        {
        transposeMatrix[j][i]=matrix[i][j];
        }
    }
    printMatix(transposeMatrix,cows,rows);
}

void matrixClockWise(int matrix[][SIZE],int size)
{
    int rows=size,cols=size;
    int r=0,c=0;
    int count=0;
    int allElements=size*size;
    bool flag=false;
    while(count<allElements && !flag ) 
    {
        for(int i=r;i<rows;i++)
        {
            cout<<matrix[i][c]<<" ";
            count++;
        }
        if(count>=allElements)
        {
            !flag;
        }
        c++;
        for(int i=c;i<cols;i++)
        {
            cout<<matrix[rows-1][i]<<" ";
            count++;
        }
        if(count>=allElements)
        {
            !flag;
        }
        rows--;
        for(int i=rows-1;i>=r;i--)
        {
            cout<<matrix[i][cols-1]<<" ";
            count++;
        }
        if(count>=allElements)
        {
            !flag;
        }
        cols--;
        for(int i=cols-1;i>=c;i--)
        {
            cout<<matrix[r][i]<<" ";
            count++;
        }
        r++;
        if(count>=allElements)
        {
            !flag;
        }
    }    
}

void matrixMultiply(int firstMatrix[][SIZE],int firstrows,int firstcows,int secondMatrix[][SIZE],int secondrows,int secondcows,int multiplyMatrix[][SIZE])
{
    int size=secondrows;
    int element=0;
    int sum=0;
    for(int k=0;k<firstrows;k++)
    {
        for(int j=0;j<secondcows;j++)
        {
            for(int i=0;i<size;i++)
            {
                sum=firstMatrix[k][i]*secondMatrix[i][j];
                element=element+sum;
            }
            for(int i=j;i<secondcows;i++)
            {
                multiplyMatrix[i][k]=element;
            }
            element=0;
        }
    }
    printMatix(multiplyMatrix,firstrows,secondcows);
}


bool hasRrepetedNumbers(int array[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(array[i]==array[j]){
                 count++;
            }
            if(count>1)
            {
                return true;
            }
        }
        count=0;
    }
    return false;
}

bool isExist(int array[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        
        if(array[i]==element)
        {
            return true;
        }
    }
    return false;
}

bool subset(int array[],int arraySize,int subsedArray[],int subsedArraySize)
{
    for(int i=0;i<subsedArraySize;i++)
    {
        if(!isExist(array,arraySize,subsedArray[i]))
        {
            return false;
        }
    }
    return true;
}

void rotateMatrix(int arr[][SIZE], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        for (int j = i; j < size - i - 1; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[size - 1 - j][i];
            arr[size - 1 - j][i] = arr[size - 1 - i][size - 1 - j];
            arr[size - 1 - i][size - 1 - j] = arr[j][size - 1 - i];
            arr[j][size - 1 - i] = temp;
        }
    }
}


void printMatix(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
       cout<<*(array+i)<<" "; 
    }
}
int main()
{
    // Task 0 Умножаване на матрици (multiply)
    int firstMatrix[SIZE][SIZE];
    int secondMatrix[SIZE][SIZE];
    int multiplyMatrix[SIZE][SIZE];
    int firstrows,firstcows,secondrows,secondcows;

    cout<<"Enter firstmatrix rows";
    cin>>firstrows;
    cout<<"Enter first matrix cows";
    cin>>firstcows;
    cout<<"Enter second matrix rows";
    cin>>secondrows;
    cout<<"Enter second matrix cow ";
    cin>>secondcows;

    if(firstcows!=secondrows)
    {
        cout<<"NO";
        return 0;
    }else
    {
        cout<<"YES";
    }

    firstMatrix[firstrows][firstcows];
    secondMatrix[secondrows][secondcows];
    multiplyMatrix[firstrows][secondcows];

    fillMatrix(firstMatrix,firstrows,firstcows);
    printMatix(firstMatrix,firstrows,firstcows);

    fillMatrix(secondMatrix,secondrows,secondcows);
    printMatix(secondMatrix,secondrows,secondcows);

    cout<<"Multiply matrix is= "<<endl;
    matrixMultiply(firstMatrix,firstrows,firstcows,secondMatrix,secondrows,secondcows,multiplyMatrix);
    
    // Task 1 - Counter-clockwise
    int matrix[SIZE][SIZE];
    int size;
    cout<<"Enter size";
    cin>>size;
    matrix[size][size];
    fillMatrix(matrix,size,size);
    matrixClockWise(matrix,size);
     
    // Task 3 rotation
    rotateMatrix(matrix,size);
    printMatix(matrix,size,size);
    
    //Task 2 Подмножество
    int array[SIZE],subsetArray[SIZE];
    int arraySize,subsetArraySize;
    
    cout<<"Enter array size";
    cin>>subsetArraySize;
    subsetArray[subsetArraySize];
    do
    {
        cout<<"In array must be havent repeating digits."<<endl;
        fillArray(subsetArray,subsetArraySize);   

    }while(!hasRrepetedNumbers(array,arraySize));
    cout<<"Enter array size";
    cin>>arraySize;
    array[arraySize];
    fillArray(array,arraySize);
    if(subset(array,arraySize,subsetArray,subsetArraySize))
    {
        cout<<"Yes, it is a subset";
    }else 
    {
        cout<<"No, it isnt a subset";
    }

}