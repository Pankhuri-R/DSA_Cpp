#include <bits\stdc++.h>

using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

    // Default constructor
    Student()
    {
        cout << "Default constructor called" << endl;
    }

    Student(string s, int a, int g)
    {
        cout << "Parameterized constructor called" << endl;
        name = s;
        age = a;
        gender = g;
    }

    // copy constructor
    Student(Student &s)
    {
        cout << "Copy constructor called" << endl;
        name = s.name;
        age = s.age;
        gender = s.gender;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called\n";
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name=" << name << endl;
        cout << "Age=" << age << endl;
        cout << "Gender=" << gender << endl;
    }

    bool operator==(Student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    // Student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "Name=";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "Age= ";
    //     cin >> arr[i].age;
    //     cout << "Gender=";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    Student a("Dave", 20, 0); // parameterized constructor
    // a.printInfo();
    Student b;     // default constructor
    Student c = a; // copy constructor

    if (c == a)
    {
        cout << "Same\n";
    }
    else
    {
        cout << "Not same\n";
    }

    return 0;
}