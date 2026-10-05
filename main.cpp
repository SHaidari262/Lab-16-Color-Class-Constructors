#include <iostream>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // Default constructor
    Color() {
        red = 0;
        green = 0;
        blue = 0;
    }

    // Parameterized constructor
    Color(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }

    // Partial constructor
    Color(int r, int g) {
        red = r;
        green = g;
        blue = 0;
    }

    void print() const {
        cout << "Red: " << red
             << ", Green: " << green
             << ", Blue: " << blue << endl;
    }
};

int main() {
    // Default constructor
    Color color1;

    // Parameterized constructor
    Color color2(255, 100, 50);

    // Partial constructor
    Color color3(100, 200);

    cout << "Color 1: ";
    color1.print();

    cout << "Color 2: ";
    color2.print();

    cout << "Color 3: ";
    color3.print();

    return 0;
}