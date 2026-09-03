#include<iostream>
using namespace std;

void swapByValue(int a, int b)
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void swapByReference(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 20;

    cout<<"Before swap by value: ";
    cout<<num1<<" "<<num2<<endl;

    swapByValue(num1,num2);

    cout<<"After swap by value: ";
    cout<<num1<<" "<<num2<<endl;

    cout<<"Before swap by reference: ";
    cout<<num1<<" "<<num2<<endl;

    swapByReference(num1,num2);

    cout<<"Before swap by reference: ";
    cout<<num1<<" "<<num2<<endl;

    return 0;
}