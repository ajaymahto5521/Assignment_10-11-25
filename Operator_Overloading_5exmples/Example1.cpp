#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(float r=0, float i=0) : real(r), imag(i) {}

    // Operator overloading
    Complex operator + (const Complex &obj) const {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2), c2(1, 7);
    Complex result = c1 + c2;
    result.display();
}
