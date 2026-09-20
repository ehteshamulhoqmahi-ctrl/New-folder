#include <bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    double a, b;

    while (true) {
        cout << "\n1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;
        if (choice == 0) break;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1:
                cout << "Result = " << a + b << '\n';
                break;
            case 2:
                cout << "Result = " << a - b << '\n';
                break;
            case 3:
                cout << "Result = " << a * b << '\n';
                break;
            case 4:
                if (b == 0)
                    cout << "Cannot divide by zero\n";
                else
                    cout << "Result = " << a / b << '\n';
                break;
            case 5:
                cout << "Result = " << pow(a, b) << '\n';
                break;
            default:
                cout << "Invalid choice\n";
        }
    }

    cout << "Calculator closed.\n";
    return 0;
}