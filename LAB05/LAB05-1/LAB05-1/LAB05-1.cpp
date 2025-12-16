#include <iostream>
#include <string>
using namespace std;

double calculateCircleArea(double x)
{
    double PI = 3.14159;
    double area = PI * x * x;
    return area;
}
double rectangleArea(double width, double length)
{
    return width * length;
}
    int main()
{
        //หาพื้นที่วงกลม
        const double PI = 3.14159;
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        double area1 = calculateCircleArea(radius);
       // ฟังชันหาพื้นที่สี่่เหลียม    
    double width, length;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter length: ";
    cin >> length;

    double area2 = rectangleArea(width, length);
    cout << "CircleArea " << " = " << area1 << endl;
    cout << "Rectangle area = " << area2 << endl;
 
    return 0;
   
}