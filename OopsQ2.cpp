#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    void inputDimensions() {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;
    }

    float calculateArea() {
        return length * width;
    }

    float calculatePerimeter() {
        return 2 * (length + width);
    }

    void displayResult() {
        cout << "\n--- Rectangle Details ---\n";
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle r;
    r.inputDimensions();
    r.displayResult();

    return 0;
}