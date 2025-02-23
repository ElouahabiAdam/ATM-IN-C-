#include<iostream>
#include<string>
using namespace std;

struct UserData {

    int password; // User's password
    string username; // User's name
    int balance = 0; // Balance, starts at zero

    void inputData() {
        cout << "Enter username: "; 
        cin >> username;
        cout << "Enter password: "; 
        cin >> password;
        cout << "Enter your balance: "; 
        cin >> balance;
    }
};

// Function to withdraw money
void withdraw(UserData& user, int amount) {
    if (amount > user.balance) {
        cout << "You do not have enough money for this transaction." << endl;
    } else {
        user.balance -= amount;
        cout << "The amount has been withdrawn. Good day!" << endl;
        cout << "Your balance now is: " << user.balance << endl;
    }
}

// Function to waste money
void wasteMoney(UserData& user, int sum) {
    cout << "You wasted: " << sum << " money!" << endl;
    user.balance -= sum;  // Subtract the wasted money from balance
    cout << "Your balance now is: " << user.balance << endl;
}

// Function to display choices
void printChoices() {
    cout << "1. Your balance" << endl;
    cout << "2. Change your password" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Waste money" << endl;
    cout << "5. Personal information" << endl;
    cout << "6. Exit" << endl;
}

int main() {
    int userChoice;
    UserData user;
    user.inputData();

    cout << "*** Welcome to the Simple ATM ***" << endl;

    while (true) {
        printChoices();
        cin >> userChoice;

        switch (userChoice) {
        case 1:
            cout << "Your balance is: " << user.balance << endl;
            break;
        case 2:
            cout << "Enter your new password: ";
            cin >> user.password;
            break;
        case 3:
            {
                int amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                withdraw(user, amount);
                break;
            }
        case 4:
            {
                int sum;
                cout << "Enter amount to waste: ";
                cin >> sum;
                wasteMoney(user, sum);
                break;
            }
        case 5:
            cout << "Username: " << user.username << endl;
            cout << "Balance: " << user.balance << endl;
            cout << "Password: " << user.password << endl;
            break;
        case 6:
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
