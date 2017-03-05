/* ��7_3.cpp */
#include <iostream>
using namespace std;
const double PI = 3.14159;
class Point {
public:
    Point(double x = 0, double y = 0);
    double getX() const;
    double getY() const;
protected:
    double x;
    double y;  //������Ա��Ҫ���ڼ̳У��������ڲ�����ֱ�ӷ��ʻ���ı�����Ա 
friend ostream &operator<<(ostream &out, const Point &p);
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
ostream &operator<<(ostream &out, const Point &p) {
    out << "��(" << p.x << "," << p.y << ")";
    return out;
}
class Circle:public Point {
public:
    Circle(double x = 0, double y = 0, double radius = 1);
    void setRadius(double radius);
    double getRadius() const;
    double computePerimeter() const;
    double computeArea() const;
protected:
    double radius;
friend ostream &operator<<(ostream &out, const Circle &c);
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
ostream &operator<<(ostream &out, const Circle &c) {
    out << "Բ��(" << c.x << "," << c.y << ")" << endl;
    out  << "�뾶" << c.radius;
    return out;
}
class Cyclinder:public Circle {
public:
    Cyclinder(double x = 0, double y = 0, double radius = 1, double height = 1);
    void setHeight(double height);
    double getHeight() const;
    double computeArea() const;
    double computeVolume() const;
protected:
    double height;
friend ostream &operator<<(ostream &out, const Cyclinder &c);
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
    return 2 * PI * radius * (radius + height);
}
double Cyclinder::computeVolume() const {
    return PI * radius * radius * height;
}
ostream &operator<<(ostream &out, const Cyclinder &c) {
    out << "Բ��(" << c.x << "," << c.y << ")" << endl;
    out << "�뾶" << c.radius << endl;
    out << "��" << c.height;
    return out;
}
int main() {
    Point point(2, 3);
    cout << point << endl;
    Circle circle(6, 5, 7);
    cout << circle << endl;
    cout << "Բ�ܳ�" << circle.computePerimeter() << endl;
    cout << "Բ���" << circle.computeArea() << endl;
    Cyclinder cyclinder(13, 11, 12, 10);
    cout << cyclinder << endl;
    cout << "�����" << cyclinder.computeArea() << endl;
    cout << "���" << cyclinder.computeVolume() << endl;
    return 0;
}
