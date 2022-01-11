#include <iostream>
using namespace std;
int strlen(char *string)
{
    if (*string == 0)
    {
        return 0;
    }
    return 1 + strlen(string + 1);
}

void printString(char *array)
{
    for (int i = 0; *(array + i) != '\0'; i++)
    {
        cout << *(array + i) << " ";
    }
}

int multiply(int n,int count,int k)
{
    if(count>=n)
    {
        return 1;
    }
    return  count*multiply(n,count+k,k);
}

void lexicographically(char *firstString,char *secondString)
{
    if(*firstString=='\0' && *secondString=='\0')
    {
        cout<<"=";
        return;
    }
    if(*firstString=='\0')
    {
        cout<<"<";
        return;
    }
    if(*secondString=='\0')
    {
        cout<<">";
        return;
    }
    if(*firstString<*secondString)
    {
        cout<<"<";
        return;
    }
    if(*firstString>*secondString)
    {
        cout<<">";
        return;
    }
    return lexicographically(firstString+1,secondString+1);
} 

void strcopy(char *firstString,char *secondString)
{
    int count=0;
    for(int i=0;firstString[i]!='\0';i++)
    {
        secondString[i]=firstString[i];
        count++;
    }
    secondString[count]='\0';
}

int firstWord(const char* string)
{
    if(*string==' ')
    {
        return 0;
    }   
    return 1+firstWord(string+1);
}

void findWords(const char* string,int count,int maxCount ,int minCount,char *minWord,char *maxWord,char *word)
{
    if(*string=='\0')
    {
        *word='\0';
        if(count>=maxCount)
        {
        strcopy(word-count,maxWord);
        }
        if(count<=minCount)
        {
        strcopy(word-count,minWord);
        }
        return;
    }
    if(*string>='a' && *string<='z' || *string>='A' && *string<='Z')
    {
        *word=*string;
        count++;
    }else
    {
        *word='\0';
        if(count>=maxCount)
        {
        strcopy(word-count,maxWord);
        maxCount=count;
        }
        if(count<=minCount)
        {
        strcopy(word-count,minWord);
        minCount=count;
        }

        return findWords(string+1,0,maxCount,minCount,minWord,maxWord,word-count);
    }
    return findWords(string+1,count,maxCount,minCount,minWord,maxWord,word+1);
}

void truncate(char* string, int n)
{
    if(*string=='\0')
    {
        return;
    }
    if(n==0)
    {
        *string='\0';
        return;
    }
    return truncate(string+1,n-1);
}
int main()
{
    //Task 1
    // int n,k;
    // cout<<"enter n";
    // cin>>n;
    // cout<<"enter k";
    // cin>>k;
    // cout<<multiply(n,1,k);

    // Task 2
    // char firstString[256];
    // cin.getline(firstString,256);
    // char secondString[256];
    // cin.getline(secondString,256);
    // cout<<firstString;
    // lexicographically(firstString,secondString);
    // cout<<secondString;

    //Task 5
    char string[256],word[256],minWord[256],maxWord[256];
    cin.getline(string,256);
    findWords(string,0,firstWord(string),firstWord(string),minWord,maxWord,word);
    cout<<"Man word is ";
    printString(maxWord);
    cout<<endl<<"Mix word is ";
    printString(minWord);


    // Task 4
    // char string[256];
    // cin.getline(string,256);
    // int n;
    // cout<<"enter n"<<endl;
    // cin>>n;
    // truncate(string,n);
    // printString(string);




}