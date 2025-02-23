# 🏧 Simple ATM

This is a simple ATM simulation program written in C++. It allows users to input their data, check their balance, change their password, withdraw money, waste money, and view their personal information.

## ✨ Features

- 📝 Input user data (username, password, balance)
- 💰 Check balance
- 🔒 Change password
- 💸 Withdraw money
- 🗑️ Waste money
- 👤 View personal information

## 🚀 Usage

1. Compile the program using a C++ compiler:
    ```sh
    g++ atm.cpp -o atm
    ```

2. Run the compiled program:
    ```sh
    ./atm
    ```

3. Follow the on-screen instructions to interact with the ATM.

## 📂 Code Structure

- `UserData`(http://_vscodecontentref_/0) struct: Stores user information such as username, password, and balance.
- `inputData` method: Prompts the user to input their username, password, and balance.
- `withdraw` (http://_vscodecontentref_/1) function: Allows the user to withdraw money from their balance.
- `wasteMoney`(http://_vscodecontentref_/2) function: Allows the user to waste money, subtracting it from their balance.
- `printChoices`(http://_vscodecontentref_/3) function: Displays the available choices to the user.
- `main`(http://_vscodecontentref_/4) function: The entry point of the program, handles user interaction and calls the appropriate functions based on user input.

## 📝 Example

```sh
*** Welcome to the Simple ATM ***
1. Your balance
2. Change your password
3. Withdraw money
4. Waste money
5. Personal information
6. Exit
