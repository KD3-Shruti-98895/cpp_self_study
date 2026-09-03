#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    float marks;

public:
    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << " Marks: " << marks << endl;
    }

    float getMarks()
    {
        return marks;
    }
};

int main()
{
    int n, i, highestIndex = 0;

    cout << "Enter number of students: ";
    cin >> n;

    Student *students = new Student[n];

    for(i = 0; i < n; i++)
    {
        cout << "Enter details of Student " << i + 1 << endl;
        students[i].accept();
    }

    cout << "All Student Records:";

    for(i = 0; i < n; i++)
    {
        students[i].display();

        if(students[i].getMarks() > students[highestIndex].getMarks())
            highestIndex = i;
    }

    cout << "Student with Highest Marks:";
    students[highestIndex].display();

    delete[] students;

    return 0;
}