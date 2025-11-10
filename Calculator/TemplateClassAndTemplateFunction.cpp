#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers are: " << num1 << " and " << num2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
        cout << "Maximum: " << findMax(num1, num2) << endl; // using template function
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num2 != 0 ? num1 / num2 : 0; }
};

int main() {
    cout << "===== Template Calculator =====" << endl;

    int a1, b1;
    cout << "\nEnter two integers: ";
    cin >> a1 >> b1;
    Calculator<int> intCalc(a1, b1);
    intCalc.displayResult();

    double a2, b2;
    cout << "\nEnter two decimal numbers: ";
    cin >> a2 >> b2;
    Calculator<double> doubleCalc(a2, b2);
    doubleCalc.displayResult();

    return 0;
}
