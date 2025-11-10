// Example 5: 2D Vector — Overloading +, -, *, and ==
#include <iostream>
#include <cmath>

class Vector2D {
    double x, y;
public:
    Vector2D(double x=0, double y=0) : x(x), y(y) {}

    // Add two vectors
    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x + other.x, y + other.y);
    }

    // Subtract two vectors
    Vector2D operator-(const Vector2D& other) const {
        return Vector2D(x - other.x, y - other.y);
    }

    // Dot product using '*'
    double operator*(const Vector2D& other) const {
        return x * other.x + y * other.y;
    }

    // Compare magnitudes
    bool operator==(const Vector2D& other) const {
        return std::fabs(x - other.x) < 1e-9 && std::fabs(y - other.y) < 1e-9;
    }

    double magnitude() const { return std::sqrt(x*x + y*y); }

    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};
int main() {
    Vector2D a(3, 4), b(1, 2);

    Vector2D sum = a + b;
    Vector2D diff = a - b;
    double dot = a * b;

    std::cout << "a = "; a.display(); std::cout << "\n";
    std::cout << "b = "; b.display(); std::cout << "\n";

    std::cout << "a + b = "; sum.display(); std::cout << "\n";
    std::cout << "a - b = "; diff.display(); std::cout << "\n";
    std::cout << "a · b = " << dot << "\n";
    std::cout << "Equal? " << (a == b ? "Yes" : "No") << "\n";
}
/*
Pros

Shows multiple operator overloads in one class (+, -, *, ==)
Real-world math use case (vectors in physics or graphics)
Compact and clear logic
Demonstrates how operators can have different meanings for user-defined types

Cons

* for dot product may confuse users expecting scalar multiplication (k * vector)
No normalization of floating-point rounding (tiny precision issues)
Overusing operators can make code less readable if semantics aren’t obvious

*/
