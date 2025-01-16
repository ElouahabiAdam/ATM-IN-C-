#include<iostream>
#include<string>
using namespace std;

struct UserData {

    int password; // كلمة مرور المستخدم (User's password)
    string username; // اسم المستخدم (User's name)
    int balance = 0; // الرصيد، يبدأ من صفر (Balance, starts at zero)

    void inputData(){
        cout << "Enter username: "; // اطلب اسم المستخدم (Ask for username)
        cin >> username; // إدخال اسم المستخدم (Input username)
        cout << "Enter password: "; // اطلب كلمة المرور (Ask for password)
        cin >> password; // إدخال كلمة المرور (Input password)
        cout << "Enter your balance: "; // اطلب الرصيد (Ask for balance)
        cin >> balance; // إدخال الرصيد (Input balance)
    }
};

// دالة لسحب المال (Function to withdraw money)
void withdraw(UserData& user, int amount){
    cin >> amount; // أدخل المبلغ الذي ترغب في سحبه (Input the amount to withdraw)
    if (amount > user.balance) { // إذا كان المبلغ أكبر من الرصيد (If the amount is greater than the balance)
        cout << "You do not have enough money for this transaction." << endl; // رسالة إذا كان الرصيد غير كافٍ (Message if the balance is insufficient)
    } else {
        user.balance -= amount; // خصم المبلغ من الرصيد (Subtract the amount from the balance)
        cout << "The amount has been withdrawn. Good day!" << endl; // رسالة تأكيد بالسحب (Message confirming the withdrawal)
        cout << "Your balance now is: " << user.balance << endl; // عرض الرصيد بعد السحب (Display the new balance)
    }
}

// دالة لإضاعة المال (Function to waste money)
void wasteMoney(UserData& user, int sum){
    cin >> sum; // أدخل المبلغ الذي ترغب في "إضاعته" (Input the amount to "waste")
    cout << "Your money now is: " << sum + user.balance << endl; // طباعة الرصيد بعد "إضاعة" المال (Display the balance after "wasting" the money)
}

// دالة لعرض الخيارات للمستخدم (Function to display choices)
void printChoices(){
    cout << "1. Your balance" << endl; // عرض الرصيد (Display balance)
    cout << "2. Change your password" << endl; // تغيير كلمة المرور (Change password)
    cout << "3. Withdraw money" << endl; // سحب المال (Withdraw money)
    cout << "4. Waste money" << endl; // إضاعة المال (Waste money)
    cout << "5. Personal information" << endl; // عرض المعلومات الشخصية (Display personal information)
    cout << "6. Exit" << endl; // خيار الخروج (Exit option)
}

int main(){
    int userChoice; // متغير لاختيار المستخدم (Variable to store user's choice)
    UserData user; // تعريف كائن من هيكل UserData (Create an object of UserData)
    user.inputData(); // استدعاء دالة إدخال البيانات (Call the input data function)

    cout << "*** Welcome to the Simple ATM ***" << endl; // رسالة ترحيب (Welcome message)

    // حلقة لا نهائية حتى يختار المستخدم الخروج (Infinite loop until user chooses to exit)
    while (true) {
        printChoices(); // عرض الخيارات للمستخدم (Display choices)
        cout <<"Choices:";
        cin >> userChoice; // إدخال اختيار المستخدم (Input user's choice)

        switch (userChoice) { // استخدام switch لاختيار العملية المناسبة (Use switch for choosing the appropriate operation)
        case 1:
            cout << "Your balance is: " << user.balance << endl; // عرض الرصيد (Display balance)
            break;
        case 2:
            cout << "Enter your new password: "; // طلب كلمة المرور الجديدة (Ask for new password)
            cin >> user.password; // إدخال كلمة المرور الجديدة (Input new password)
            break;
        case 3:
            cout << "Enter amount to withdraw: "; // طلب المبلغ الذي يريد المستخدم سحبه (Ask for the amount to withdraw)
            withdraw(user, 0); // استدعاء دالة السحب (Call the withdraw function)
            break;
        case 4:
            cout << "Enter amount to waste: "; // طلب المبلغ الذي يريد المستخدم "إضاعته" (Ask for the amount to waste)
            wasteMoney(user, 0); // استدعاء دالة إضاعة المال (Call the waste money function)
            break;
        case 5:
            cout << "Username: " << user.username << endl; // عرض اسم المستخدم (Display username)
            cout << "Balance: " << user.balance << endl; // عرض الرصيد (Display balance)
            cout << "Password: " << user.password << endl; // عرض كلمة المرور (Display password)
            break;
        case 6:
            cout << "Exiting the program. Goodbye!" << endl; // رسالة عند الخروج (Exit message)
            return 0; // الخروج من البرنامج (Exit the program)
        default:
            cout << "Invalid choice, please try again." << endl; // إذا كان الاختيار غير صحيح (If the choice is invalid)
        }
    }

    return 0;
}
