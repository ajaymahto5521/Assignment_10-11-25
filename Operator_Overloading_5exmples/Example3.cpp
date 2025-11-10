#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    Student(int m) : marks(m) {}

    bool operator==(const Student &s) const {
        return marks == s.marks;
    }
};

int main() {
    Student s1(85), s2(85), s3(90);
    cout << (s1 == s2 ? "Equal\n" : "Not Equal\n");
    cout << (s1 == s3 ? "Equal\n" : "Not Equal\n");
}
