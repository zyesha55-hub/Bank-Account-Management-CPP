#include<iostream>
#include<string>
using namespace std;

class BankAccount 
{
private:
    string depositorName;
    long accountNumber;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(string name, long accNum, double initialBalance) 
	{
        depositorName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount)
	 {
        if (amount > 0) 
		{
            balance += amount;
            cout << "Successfully deposited: " << amount << endl;
        }
    }

    void withdraw(double amount)
	 {
        if (amount > balance) 
		{
            cout << "Insufficient Balance!" << endl;
        } else
		 {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display()
	 {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
 {
    // Creating an object of BankAccount
    BankAccount myAcc("Ayesha Afzaal", 12345678, 5000.0);

    myAcc.display();
    
    cout << "\nDepositing 2000..." << endl;
    myAcc.deposit(2000);
    
    cout << "Withdrawing 3000..." << endl;
    myAcc.withdraw(3000);

    myAcc.display();

    return 0;
}
