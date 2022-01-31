#include <iostream>
using namespace std;
const int SUN_LIGHT_SPEED = 299792;
struct Planet
{
    char name[32];
    long double distance;
    double dm;
    double mass;
    void createPlanet()
    {
        cout << "Enter the name: ";
        cin.getline(name, 32, '\n');
        do
        {
            cout << "Enter the distance: ";
            cin >> distance;
        } while (distance < 0);

        do
        {
            cout << "Enter the diameter: ";
            cin >> dm;
        } while (dm < 0);

        do
        {
            cout << "Enter the mass: ";
            cin >> mass;
        } while (mass < 0);
        cin.ignore();
    }
    void printPlanet()
    {
        cout << "Name: " << name << endl;
        cout << "Distance: " << distance << endl;
        cout << "Diameter: " << dm << endl;
        cout << "Mass: " << mass << endl;
        cout << "Time to sun: " << timeToSun() << endl;
        cout << endl;
    }
    double timeToSun()
    {
        return distance / SUN_LIGHT_SPEED;
    }
};
struct student
{
    char name[21];
    double average;
    int facnumber;
    bool haspas;

    void createStudent()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter average sucess" << endl;
        cin >> average;
        do
        {
            cout << "Enter facnumber" << endl;
            cin >> facnumber;
        } while (facnumber < 7000 || facnumber > 8000);
        cout << "Enter 1 if u pass enter 0 if u dont" << endl;
        cin >> haspas;
    }
    void printStudent()
    {
        cout << "name is-" << name << endl;
        cout << "average success is-" << average << endl;
        cout << "fac number is-" << facnumber << endl;
        cout << "Has pass-" << boolalpha << haspas << endl;
    }
};

void comparisonByAverage(student &_firstStudent, student &_secondStudent)
{
    if (_firstStudent.average > _secondStudent.average)
    {
        cout << _firstStudent.name << " " << _firstStudent.average << endl;
    }
    else
        cout << _secondStudent.name << " " << _secondStudent.average << endl;
}

void comparisonByFacnumber(student &_firstStudent, student &_secondStudent)
{
    if (_firstStudent.facnumber > _secondStudent.facnumber)
    {
        cout << _firstStudent.name << " " << _firstStudent.facnumber << endl;
    }
    else
        cout << _secondStudent.name << " " << _secondStudent.facnumber << endl;
}

void comparisonByPass(student &_firstStudent, student &_secondStudent)
{
    if (_firstStudent.haspas)
    {
        cout << _firstStudent.name << " " << _firstStudent.haspas << endl;
    }
    if (_secondStudent.haspas)
    {
        cout << _secondStudent.name << " " << _secondStudent.haspas << endl;
    }
}

int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

struct SUSI
{
    student students[30] = {{"Ivan", 75, 334422, 1}, {"Pesho", 64, 543288, 1}, {"Milko", 23, 8836563, 0}, {"Yoana", 96, 570473, 1}, {"Teda", 84, 757593, 1}, {"Dido", 21, 395630, 0}, {"Kalata", 53, 759375, 1}, {"Gosho", 70, 857942, 1}, {"Misho", 39, 362854, 0}, {"Ivaila", 92, 758395, 1}, {"Dragan", 59, 994843, 1}, {"Joro", 68, 747471, 1}, {"Petio", 43, 484832, 1}, {"Natali", 83, 494940, 1}, {"Sofia", 65, 859493, 1}, {"Bobi", 4, 949323, 0}, {"Didka", 12, 149473, 0}, {"Kiro", 51, 837563, 0}, {"Ani", 23, 865638, 0}, {"Stoilcho", 39, 837563, 0}, {"Mitio", 32, 984657, 0}, {"Koceto", 86, 846573, 1}, {"Penka", 47, 864334, 1}, {"Stoilka", 29, 465622, 0}, {"Liolio", 65, 848574, 1}, {"Mitaka", 41, 748375, 0}, {"Lili", 32, 883832, 0}, {"Bonka", 62, 947432, 1}, {"Milka", 53, 847631, 1}, {"Pencho", 18, 846221, 0}};
    int size = 30;
    void createStudents()
    {
        for (int i = 0; i < size; i++)
        {
            students[i].createStudent();
        }
    }
    void printStudens()
    {
        for (int i = 0; i < size; i++)
        {
            students[i].printStudent();
        }
    }
    void sortStudentsByAvarige()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (students[i].average > students[j].average)
                {
                    swap(students[i], students[j]);
                }
            }
        }
    }
    void sortByFacnumber()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (students[i].facnumber < students[j].facnumber)
                {
                    swap(students[i], students[j]);
                }
            }
        }
    }
    void sortByPass()
    {
        for (int i = 0; i < size; i++)
        {
            if (students[i].haspas)
            {
                students[i].printStudent();
            }
        }
    }
};

struct product
{
    char description[50];
    int number;
    double price;

    void crateProduct()
    {
        cout << "Enter product description :";
        cin >> description;
        cout << "Enter number to product :";
        cin >> number;
        cout << "Enter price to product :";
        cin >> price;
    }
    void printProduct()
    {
        cout << "Description :" << description << endl;
        cout << "Number  product :" << number << endl;
        cout << "Price of product :" << price << endl;
        cout << endl;
    }
};

void order(product *products, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (products[i].number < products[j].number)
            {
                swap(products[i].number, products[j].number);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        products[i].printProduct();
    }
}

struct book
{
    char name[31];
    double price;
    int year;
    char autrhorName[41];

    void createBook()
    {
        cout << "enter name :";
        cin >> name;
        cout << "enter price :";
        cin >> price;
        cout << "enter year :";
        cin >> year;
        cout << "enter author name :";
        cin >> autrhorName;
    }
    double getPrice()
    {
        return price;
    }
    int getYear()
    {
        return year;
    }
    bool isNew()
    {
        if (year > 2010)
            return true;
        else
            return false;
    }
    void printBook()
    {
        cout << name << endl;
        cout << price << endl;
        cout << year << endl;
        cout << autrhorName << endl;
    }
};

void swapPrices(book first, book second)
{
    swap(first.price, second.price);
}

void sortByYear(book *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i].year > arr[j].year)
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int howNewBooks(book *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].isNew())
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // Struct planet
    Planet planets[2];
    for (int i = 0; i < 2; i++)
    {
        planets[i].createPlanet();
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        planets[i].printPlanet();
    }

    // Struct student
    student firstStudent, secondStudent;
    firstStudent.createStudent();
    secondStudent.createStudent();
    firstStudent.printStudent();
    secondStudent.printStudent();
    comparisonByAverage(firstStudent, secondStudent);
    comparisonByFacnumber(firstStudent, secondStudent);
    comparisonByPass(firstStudent, secondStudent);

    // Struct SUSI
    SUSI a;
    a.sortByFacnumber();
    a.printStudens();
    a.sortByPass();

    product firstProduct = {"scredwriver", 456, 5.50}, secondProduct = {"hammer", 324, 8.20};
    firstProduct.printProduct();
    secondProduct.printProduct();
    int size = 5;
    product products[size];
    for (int i = 0; i < size; i++)
    {
        products[i].description[1] = '\0';
        products[i].number = 0;
        products[i].price = 0;
    }
    for (int i = 0; i < size; i++)
    {
        products[i].crateProduct();
    }
    order(products, size);

    // Struct book;
    int size = 2;
    book books[size];
    for (int i = 0; i < size; i++)
    {
        books[i].createBook();
    }
    for (int i = 0; i < size; i++)
    {

        cout << "Is new book :" << boolalpha << books[i].isNew() << endl;
        cout << "Year of publish :" << boolalpha << books[i].getYear() << endl;
        cout << "Price of book :" << boolalpha << books[i].getPrice() << endl;
    }
    sortByYear(books, size);
    for (int i = 0; i < size; i++)
    {
        books[i].printBook();
    }
    cout << "how books are new :=" << howNewBooks(books, size);
}