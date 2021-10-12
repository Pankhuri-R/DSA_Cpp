#include <bits\stdc++.h>

using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

    Student(string s)
    {
        name = s;
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

    Student a("Dave");
    a.getName();
    return 0;
}