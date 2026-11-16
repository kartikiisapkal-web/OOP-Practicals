#include <iostream>
using namespace std;

class ATM
{
    float balance;

public:
    ATM()
    {
        balance = 5000;
    }

    void checkBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

    void deposit()
    {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount <= 0)
            throw "Illegal Argument Exception: Invalid amount";

        balance = balance + amount;
        cout << "Amount deposited successfully\n";
    }

    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= 0)
            throw "Illegal Argument Exception: Invalid amount";

        if (amount > balance)
            throw "Arithmetic Exception: Insufficient funds";

        balance = balance - amount;
        cout << "Amount withdrawn successfully\n";
    }
};

int main()
{
    ATM a;
    int choice;

    do
    {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        try
        {
            switch (choice)
            {
                case 1:
                    a.checkBalance();
                    break;

                case 2:
                    a.deposit();
                    break;

                case 3:
                    a.withdraw();
                    break;

                case 4:
                    cout << "Thank you";
                    break;

                default:
                    cout << "Invalid choice";
            }
        }
        catch (const char *msg)
        {
            cout << msg << endl;
        }

    } while (choice != 4);

    return 0;
}