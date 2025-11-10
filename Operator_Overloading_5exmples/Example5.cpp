#include <iostream>
using namespace std;

class Multiply {
public:
    int operator()(int a, int b) const {
        return a * b;
    }
};

int main() {
    Multiply mul;
    cout << mul(5, 6) << endl;   // acts like a function call
}
