#include <iostream>
using namespace std;

class Point {
private:
    int x; // x-coordinate
    int y; // y-coordinate

public:
    // Constructor to initialize the point
    Point(int initial_x = 60, int initial_y = 80) : x(initial_x), y(initial_y) {}

    // Member function to modify the point's coordinates
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    // Member function to display the coordinates
    void display() const {
        cout << "The coordinates are: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Create a Point object and initialize it with (60, 80)
    Point point;

    // Display the initial coordinates
    cout << "Initial ";
    point.display();

    // Modify the coordinates using setPoint
    int i, j;
    cout << "Enter values for i and j to modify the coordinates: ";
    cin >> i >> j;
    point.setPoint(i, j);

    // Display the modified coordinates
    cout << "After modification ";
    point.display();

    return 0;
}
