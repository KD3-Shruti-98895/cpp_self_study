#include <iostream>
using namespace std;

class Person
{
protected:
    char name[50];
    int age;

public:
    Person(const char n[], int a)
    {
        int i = 0;

        while(n[i] != '\0')
        {
            name[i] = n[i];
            i++;
        }

        name[i] = '\0';
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual void work() = 0;
};

class Student : public Person
{
    float marks;

public:
    Student(const char n[], int a, float m) : Person(n, a)
    {
        marks = m;
    }

    void study()
    {
        cout << "Student is studying" << endl;
    }

    void work()
    {
        cout << "Student is doing academic work" << endl;
    }

    void display()
    {
        Person::display();
        cout << "Marks: " << marks << endl;
    }
};

class Teacher : public Person
{
    float salary;

public:
    Teacher(const char n[], int a, float s) : Person(n, a)
    {
        salary = s;
    }

    void teach()
    {
        cout << "Teacher is teaching" << endl;
    }

    void work()
    {
        cout << "Teacher is doing teaching work" << endl;
    }

    void display()
    {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student s("Shruti", 22, 85.5);
    Teacher t("Rahul", 40, 50000);

    s.display();
    s.study();

    cout << endl;

    t.display();
    t.teach();

    cout << endl;

    Person *p;

    p = &s;
    p->work();

    p = &t;
    p->work();

    return 0;
}