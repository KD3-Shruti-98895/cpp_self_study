#include <iostream>
using namespace std;

namespace college
{
    class Student
    {
        int rollNo;
        char name[50];

    public:
        Student(int r, const char n[])
        {
            rollNo = r;

            int i = 0;
            while(n[i] != '\0')
            {
                name[i] = n[i];
                i++;
            }
            name[i] = '\0';
        }

        void setRollNo(int r)
        {
            rollNo = r;
        }

        int getRollNo()
        {
            return rollNo;
        }

        void setName(const char n[])
        {
            int i = 0;

            while(n[i] != '\0')
            {
                name[i] = n[i];
                i++;
            }

            name[i] = '\0';
        }

        const char* getName()
        {
            return name;
        }

        void display()
        {
            cout << "Student Roll No: " << rollNo << endl;
            cout << "Student Name: " << name << endl;
        }
    };

    class Teacher
    {
        int teacherId;
        char name[50];

    public:
        Teacher(int id, const char n[])
        {
            teacherId = id;

            int i = 0;
            while(n[i] != '\0')
            {
                name[i] = n[i];
                i++;
            }
            name[i] = '\0';
        }

        void setTeacherId(int id)
        {
            teacherId = id;
        }

        int getTeacherId()
        {
            return teacherId;
        }

        void setName(const char n[])
        {
            int i = 0;

            while(n[i] != '\0')
            {
                name[i] = n[i];
                i++;
            }

            name[i] = '\0';
        }

        const char* getName()
        {
            return name;
        }

        void display()
        {
            cout << "Teacher ID: " << teacherId << endl;
            cout << "Teacher Name: " << name << endl;
        }
    };
}

int main()
{
    college::Student s(101, "Shruti");
    college::Teacher t(201, "Rahul");

    s.display();

    cout << endl;

    t.display();

    cout << endl;

    s.setRollNo(102);
    s.setName("Priya");

    t.setTeacherId(202);
    t.setName("Amit");

    cout << "After Updating:" << endl;

    cout << endl;
    s.display();

    cout << endl;
    t.display();

    return 0;
}