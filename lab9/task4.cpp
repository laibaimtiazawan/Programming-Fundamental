#include <iostream>
using namespace std;
int main() 
{
    double balance = 1000.0;
    int choice = 0;
    double amount;

    while (choice != 4)
	 {
        cout << "\n====== Simple Banking System ======\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
		{
            cout << "Enter amount to deposit: ";
            cin >> amount;

            if (amount > 0)
			 {
                balance += amount;
                cout << "Deposit successful!\n";
            } else 
			{
                cout << "Invalid deposit amount.\n";
            }

        } else if (choice == 2) 
		{
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount > 0 && amount <= balance)
			 {
                balance -= amount;
                cout << "Withdrawal successful!\n";
            } else if (amount > balance)
			 {
                cout << "Insufficient balance!\n";
            } else {
                cout << "Invalid withdrawal amount.\n";
            }

        } else if (choice == 3)
		 {
            cout << "Current balance: $" << balance << endl;

        } else if (choice == 4) 
		{
            cout << "Thank you for using the banking system.\n";

        } else {
            cout << "Invalid menu choice. Please try again.\n";
        }
    }
}