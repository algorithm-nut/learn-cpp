/* 例7_17.cpp */

//纯虚函数是在基类中声明的虚函数，没有函数体
//含有纯虚函数的类为抽象类，它只能作为其他类的基类
//不能创建抽象类对象，但可以声明抽象类指针或引用 

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
    double getArea() {         // 重定义Shape类的纯虚函数
        return PI * radius * radius;
    }
    double getPerimeter() {     // 重定义Shape类的纯虚函数
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
    double getArea() {      // 重定义Shape类的纯虚函数
        return width * height;
    }
    double getPerimeter() {     // 重定义Shape类的纯虚函数
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
    double getArea() {      // 重定义Shape类的纯虚函数
         double p = (side1 + side2 + side3) * 0.5;
         return sqrt(p * (p - side1) * (p - side2) * (p - side3));
    }
    double getPerimeter() {     // 重定义Shape类的纯虚函数
        return side1 + side2 + side3;
    }
private:
    double side1, side2, side3;
};
void displayShape(Shape &shape) {
    cout << "面积: " << shape.getArea() << " "
             << "周长: " << shape.getPerimeter() << endl;
}
int main() {
    Circle circle(5);
    Rectangle rectangle(5, 3);
    Triangle triangle(2, 2.5, 2.5);
    cout << "圆 ";
    displayShape(circle);
    cout << "矩形 ";
    displayShape(rectangle);
    cout << "三角形 ";
    displayShape(triangle);
    return 0;
}
