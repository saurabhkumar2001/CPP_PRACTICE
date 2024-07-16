#include <iostream>
using namespace std;

class Practical; // Forward declaration

class Unit_Test {
private:
    int score;

public:
    // Constructor
    Unit_Test() : score(0) {}
    Unit_Test(int s) : score(s) {}

    // Getter method for score
    int getScore() const {
        return score;
    }

    // Overloading * operator as a friend function
    friend Practical operator*(const Unit_Test& ut, const Practical& p);
};

class Practical {
private:
    int marks;

public:
    // Constructor
    Practical() : marks(0) {}
    Practical(int m) : marks(m) {}

    // Getter method for marks
    int getMarks() const {
        return marks;
    }

    // Overloading + operator as a friend function
    friend Practical operator*(const Unit_Test& ut, const Practical& p);
};

// Overloading * operator for objects of different classes
Practical operator*(const Unit_Test& ut, const Practical& p) {
    int totalMarks = ut.score * p.marks;
    return Practical(totalMarks);
}

int main() {
    // Creating objects
    Unit_Test ut(80);
    Practical p(90);

    // Multiplying objects of different classes
    Practical result = ut * p;

    // Displaying result
    cout << "Unit Test Score: " << ut.getScore() << endl;
    cout << "Practical Marks: " << p.getMarks() << endl;
    cout << "Result of multiplication (Unit_Test * Practical): " << result.getMarks() << endl;

    return 0;
}
