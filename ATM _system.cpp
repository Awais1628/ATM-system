#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance)
	{
		balance= initialBalance;
	}

    double Balance()
	{
        return balance;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout<<"You withdraw:"<<amount<<endl;
        }
		else {
           cout<<"\nYou don't have enough balance!"<<endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout<<"You deposit:"<<amount<<endl;
        }
		else {
            cout<<"Invalid amount."<<endl;
        }
    }
};

void menu()
{
	cout << "\n\t************************************";
    cout << "\n\t*        Welcome to AS ATM         *";
    cout << "\n\t*     1. Withdraw                  *";   
    cout << "\n\t*     2. Deposit                   *";
    cout << "\n\t*     3. Quit                      *";
    cout << "\n\t*                                  *";
    cout << "\n\t************************************";
    cout << "\n\n";
}

int main() {
    BankAccount account(50000); 
    double withdraw_Amount;
    double deposit_Amount;
    int option;
    
   while (true) {
    menu();

    cout << "Enter the option you want: ";
    cin >> option;

    switch (option) {
        case 1: 
		{
            cout << "Enter the amount you want to withdraw: ";
            cin >> withdraw_Amount;
            account.withdraw(withdraw_Amount);
            cout << "Your current balance is: " << account.Balance() << endl;
            break;
        }
        case 2: 
		{
            cout << "Enter the amount you want to deposit: ";
            cin >> deposit_Amount;
            account.deposit(deposit_Amount);
            cout << "Your current balance is: " << account.Balance() << endl;
            break;
        }
        case 3: 
		{
            cout<<"Thanks for visiting AS ATM....!";
            return 0;
        }
        default: {
            cout<<"You have entered invalid number....!"<<endl;
            cout<<"Please enter valid number......!"<<endl;
        }
    }
}
    return 0;
}

