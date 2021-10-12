#include <bits\stdc++.h>

using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

    //Default constructor
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

    Student(Student &s)
    {
        cout << "Copy constructor called" << endl;
        name = s.name;
        age = s.age;
        gender = s.gender;
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

    Student a("Dave", 20, 0);
    a.printInfo();
    Student b;
    Student c = a;
    return 0;
}