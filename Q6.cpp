#include <iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    char accountHolderName[50];
    float balance;

public:
    BankAccount(int accNo, const char name[], float bal)
    {
        accountNumber = accNo;

        int i = 0;
        while(name[i] != '\0')
        {
            accountHolderName[i] = name[i];
            i++;
        }
        accountHolderName[i] = '\0';

        balance = bal;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
        if(amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(101, "Shruti", 50000);

    account.deposit(10000);
    account.withdraw(5000);

    account.display();

    return 0;
}