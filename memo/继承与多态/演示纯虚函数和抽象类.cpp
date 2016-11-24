/* ��7_17.cpp */

//���麯�����ڻ������������麯����û�к�����
//���д��麯������Ϊ�����࣬��ֻ����Ϊ������Ļ���
//���ܴ�����������󣬵���������������ָ������� 

#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;
class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};
class Circle:public Shape {
public:
    Circle(double radius = 1) {
        this->radius = radius;
    }
    double getArea() {         // �ض���Shape��Ĵ��麯��
        return PI * radius * radius;
    }
    double getPerimeter() {     // �ض���Shape��Ĵ��麯��
        return 2 * PI * radius;
    }
private:
    double radius;
};
class Rectangle:public Shape {
public:
    Rectangle(double width = 1, double height = 1) {
        this->width = width;
        this->height = height;
    }
    double getArea() {      // �ض���Shape��Ĵ��麯��
        return width * height;
    }
    double getPerimeter() {     // �ض���Shape��Ĵ��麯��
        return 2 * (width + height);
    }
private:
    double width, height;
};
class Triangle:public Shape {
public:
    Triangle(double side1, double side2, double side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }
    double getArea() {      // �ض���Shape��Ĵ��麯��
         double p = (side1 + side2 + side3) * 0.5;
         return sqrt(p * (p - side1) * (p - side2) * (p - side3));
    }
    double getPerimeter() {     // �ض���Shape��Ĵ��麯��
        return side1 + side2 + side3;
    }
private:
    double side1, side2, side3;
};
void displayShape(Shape &shape) {
    cout << "���: " << shape.getArea() << " "
             << "�ܳ�: " << shape.getPerimeter() << endl;
}
int main() {
    Circle circle(5);
    Rectangle rectangle(5, 3);
    Triangle triangle(2, 2.5, 2.5);
    cout << "Բ ";
    displayShape(circle);
    cout << "���� ";
    displayShape(rectangle);
    cout << "������ ";
    displayShape(triangle);
    return 0;
}
