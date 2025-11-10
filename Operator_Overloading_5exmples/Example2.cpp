#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v=0) : value(v) {}

    // Prefix ++
    Counter operator++() {
        ++value;
        return *this;
    }

    // Postfix ++
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() const { cout << value << endl; }
};

int main() {
    Counter c(5);
    ++c;    // Prefix
    c.display();
    c++;    // Postfix
    c.display();
}
