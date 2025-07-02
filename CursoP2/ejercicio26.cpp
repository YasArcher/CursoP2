#include <iostream>
using namespace std;

void lab_2_4_2() {
    int option;
    double a, b, result;

    do {
        cout << "\nMENU:\n";
        cout << "0 - exit\n";
        cout << "1 - addition\n";
        cout << "2 - subtraction\n";
        cout << "3 - multiplication\n";
        cout << "4 - division\n";
        cout << "Your choice? ";
        cin >> option;

        switch (option) {
        case 0:
            cout << "Goodbye!" << endl;
            break;
        case 1:
            cin >> a >> b;
            result = a + b;
            cout << "Result: " << result << endl;
            break;
        case 2:
            cin >> a >> b;
            result = a - b;
            cout << "Result: " << result << endl;
            break;
        case 3:
            cin >> a >> b;
            result = a * b;
            cout << "Result: " << result << endl;
            break;
        case 4:
            cin >> a >> b;
            if (b == 0)
                cout << "Cannot divide by zero!" << endl;
            else {
                result = a / b;
                cout << "Result: " << result << endl;
            }
            break;
        default:
            cout << "Invalid option. Try again." << endl;
        }
    } while (option != 0);
}
