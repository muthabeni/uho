#include <iostream>

using namespace std;


     void displayMenu() {
    cout << "Menu Driven Approach:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
}

void performOperation(int choice, int num1, int num2) {
    switch(choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if(num2 == 0)
                cout << "The second integer is zero, divide by zero" << endl;
            else
                cout << "Result: " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

int main() {
    char continueInput;

    do {
        int choice, num1, num2;

        displayMenu();

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        cout << "Enter integers num1: ";
        cin >> num1;

        cout << "Enter integers num2: ";
        cin >> num2;

        performOperation(choice, num1, num2);

        cout << "Do you want to continue? (Y/y to continue): ";
        cin >> continueInput;
    } while (continueInput == 'y' || continueInput == 'Y');

    return 0;
}

