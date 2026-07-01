#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    double balance;

public:
    void createAccount()
    {
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit()
    {
        double amount;

        cout << "\nEnter Deposit Amount: ";
        cin >> amount;

        if(amount <= 0)
        {
            cout << "Invalid Amount!\n";
            return;
        }

        balance += amount;

        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw()
    {
        double amount;

        cout << "\nEnter Withdrawal Amount: ";
        cin >> amount;

        if(amount > balance)
        {
            cout << "Insufficient Balance!\n";
        }
        else if(amount <= 0)
        {
            cout << "Invalid Amount!\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        }
    }

    void checkBalance()
    {
        cout << fixed << setprecision(2);
        cout << "\nCurrent Balance: Rs. " << balance << endl;
    }

    void display()
    {
        cout << "\n========== ACCOUNT DETAILS ==========\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << name << endl;
        cout << fixed << setprecision(2);
        cout << "Balance         : Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    int choice;

    do
    {
        cout << "\n========== BANKING SYSTEM ==========\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Account Details\n";
        cout << "6. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                account.createAccount();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.checkBalance();
                break;

            case 5:
                account.display();
                break;

            case 6:
                cout << "\nThank You for Using Banking System!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}