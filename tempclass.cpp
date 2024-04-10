#include <iostream>
using namespace std;

template <typename Number>
class Calculator {
public:
    Number add(Number num1, Number num2) {
        return num1 + num2;
    }

    Number sub(Number num1, Number num2) {
        return num1 - num2;
    }

    Number mul(Number num1, Number num2) {
        return num1 * num2;
    }

    Number div(Number num1, Number num2) {
        if (num2 == 0) {
            cout<< "Error: Division by zero\n";
            exit(1);
        }
        return num1 / num2;
    }
};

int main() {
    Calculator<int> intCalculator;
    int choice, num1, num2;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << intCalculator.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << intCalculator.sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << intCalculator.mul(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << intCalculator.div(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation\n";
    }

    return 0;
}
