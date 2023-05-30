// Write a C++ program to find area of rectangle, triangle and circle

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}
// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    float length, width, base, height, radius;

    // Get input for the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate and display the area of the rectangle
    float rectangleArea = calculateRectangleArea(length, width);
    cout << "Area of the rectangle: " << rectangleArea << endl;

    // Get input for the triangle
    cout << "Enter the base length of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculate and display the area of the triangle
    float triangleArea = calculateTriangleArea(base, height);
    cout << "Area of the triangle: " << triangleArea << endl;

     // Get input for the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate and display the area of the circle
    float circleArea = calculateCircleArea(radius);
    cout << "Area of the circle: " << circleArea << endl;

    return 0;
}

Output:

Enter the length of the rectangle: 2
Enter the width of the rectangle: 3
Area of the rectangle: 6
Enter the base length of the triangle: 2
Enter the height of the triangle: 3
Area of the triangle: 3
Enter the radius of the circle: 3
Area of the circle: 28.2743
