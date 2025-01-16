#include<iostream>
#include<string>
using namespace std;

struct UserData {

    int password; // User's password
    string username; // User's name
    int balance = 0; // Balance, starts at zero

    void inputData(){
        cout << "Enter username: "; // Ask for username
        cin >> username; // Input username
        cout << "Enter password: "; // Ask for password
        cin >> password; // Input password
        cout << "Enter your balance: "; // Ask for balance
        cin >> balance; // Input balance
    }
};

// Function to withdraw money
void withdraw(UserData& user, int amount){
    cin >> amount; // Input the amount to withdraw
    if (amount > user.balance) { // If the amount is greater than the balance
        cout << "You do not have enough money for this transaction." << endl; // Message if insufficient balance
    } else {
        user.balance -= amount; // Subtract the amount from the balance
        cout << "The amount has been withdrawn. Good day!" << endl; // Message confirming the withdrawal
        cout << "Your balance now is: " << user.balance << endl; // Display the new balance
    }
}

// Function to waste money
void wasteMoney(UserData& user, int sum){
    cin >> sum; // Input the amount to "waste"
    cout << "Your money now is: " << sum + user.balance << endl; // Display the balance after "wasting" money
}

// Function to display choices
void printChoices(){
    cout << "1. Your balance" << endl; // Display balance
    cout << "2. Change your password" << endl; // Change password
    cout << "3. Withdraw money" << endl; // Withdraw money
    cout << "4. Waste money" << endl; // Waste money
    cout << "5. Personal information" << endl; // Display personal information
    cout << "6. Exit" << endl; // Exit option
}

int main(){
    int userChoice; // Variable to store user's choice
    UserData user; // Create an object of UserData
    user.inputData(); // Call the input data function

    cout << "*** Welcome to the Simple ATM ***" << endl; // Welcome message

    // Infinite loop until user chooses to exit
    while (true) {
        printChoices(); // Display choices
        cin >> userChoice; // Input user's choice

        switch (userChoice) { // Use switch for choosing the appropriate operation
        case 1:
            cout << "Your balance is: " << user.balance << endl; // Display balance
            break;
        case 2:
            cout << "Enter your new password: "; // Ask for new password
            cin >> user.password; // Input new password
            break;
        case 3:
            cout << "Enter amount to withdraw: "; // Ask for the amount to withdraw
            withdraw(user, 0); // Call the withdraw function
            break;
        case 4:
            cout << "Enter amount to waste: "; // Ask for the amount to waste
            wasteMoney(user, 0); // Call the waste money function
            break;
        case 5:
            cout << "Username: " << user.username << endl; // Display username
            cout << "Balance: " << user.balance << endl; // Display balance
            cout << "Password: " << user.password << endl; // Display password
            break;
        case 6:
            cout << "Exiting the program. Goodbye!" << endl; // Exit message
            return 0; // Exit the program
        default:
            cout << "Invalid choice, please try again." << endl; // If the choice is invalid
        }
    }

    return 0;
}
