/* 例7_2.cpp */
#include <iostream>
using namespace std;
const double PI = 3.14159;
class Point {
public:
    Point(double x = 0, double y = 0);
    double getX() const;
    double getY() const;
private:
    double x;
    double y;
};
Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}
double Point::getX() const {
    return x;
}
double Point::getY() const {
    return y;
}
class Circle:public Point {
public:
    Circle(double x = 0, double y = 0, double radius = 1);
    void setRadius(double radius);
    double getRadius() const;
    double computePerimeter() const;
    double computeArea() const;
private:
    double radius;
};
Circle::Circle(double x, double y, double radius):Point(x, y) {
    this->radius = radius;
}
void Circle::setRadius(double radius) {
    this->radius = radius;
}
double Circle::getRadius() const {
    return radius;
}
double Circle::computePerimeter() const {
    return 2 * PI * radius;
}
double Circle::computeArea() const {
    return PI * radius * radius;
}
class Cyclinder:public Circle {
public:
    Cyclinder(double x = 0, double y = 0, double radius = 1, double height = 1);
    void setHeight(double height);
    double getHeight() const;
    double computeArea() const;
    double computeVolume() const;
private:
    double height;
};
Cyclinder::Cyclinder(double x, double y, double radius, double height)
    :Circle(x, y, radius) {
    this->height = height;
}
void Cyclinder::setHeight(double height) {
    this->height = height;
}
double Cyclinder::getHeight() const {
    return height;
}
double Cyclinder::computeArea() const {
    return 2 * Circle::computeArea() + computePerimeter() * height;
}
double Cyclinder::computeVolume() const {
    return Circle::computeArea() * height; //computeArea()有同名函数，防止遮蔽 
}
int main() {
    Cyclinder cyclinder(13, 11, 12, 10);
    cout << "圆心(" << cyclinder.getX() << "," << cyclinder.getY() << ")" << endl;
    cout << "半径" << cyclinder.getRadius() << endl;
    cout << "高" << cyclinder.getHeight() << endl;
    cout << "表面积" << cyclinder.computeArea() << endl;
    cout << "体积" << cyclinder.computeVolume() << endl;
    return 0;
}

