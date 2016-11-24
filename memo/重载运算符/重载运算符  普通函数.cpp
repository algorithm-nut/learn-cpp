#include <iostream>
#include <stdexcept>
using namespace std;

class Complex {
public:
    Complex(double newReal = 0, double newImaginary = 0);
    double getReal() const;
    double getImaginary() const;
    void print() const;
private:
    double realPart;                 // 实部
    double imaginaryPart;       // 虚部
};
Complex operator+(const Complex &left, const Complex &right);
Complex operator-(const Complex &left, const Complex &right);
Complex operator*(const Complex &left, const Complex &right);
Complex operator/(const Complex &left, const Complex &right);

Complex::Complex(double newReal, double newImaginary) {
    realPart = newReal;
    imaginaryPart = newImaginary;
}
double Complex::getReal() const {
    return realPart;
}
double Complex::getImaginary() const {
    return imaginaryPart;
}
void Complex::print() const {
    if(realPart == 0 && imaginaryPart == 0)
        cout << realPart << endl;
    if(realPart && imaginaryPart > 0)
        cout << realPart << "+" << imaginaryPart << "i" << endl;
    if(realPart && imaginaryPart < 0)
        cout << realPart << imaginaryPart << "i" << endl;
    if(realPart && imaginaryPart == 0)
        cout << realPart << endl;
    if(realPart == 0 && imaginaryPart)
        cout << imaginaryPart << "i" << endl;
}
Complex operator+(const Complex &left, const Complex &right) {  //无需加上前缀 
    return Complex(left.getReal() + right.getReal(),
                               left.getImaginary() + right.getImaginary());
}                                         //访问实虚部必须通过公用访问器函数 
Complex operator-(const Complex &left, const Complex &right) {
    return Complex(left.getReal() - right.getReal(),
                               left.getImaginary() - right.getImaginary());
}
Complex operator*(const Complex &left, const Complex &right) {
    return Complex(left.getReal() * right.getReal() -
                               left.getImaginary() * right.getImaginary(),
                               left.getReal() * right.getImaginary() +
                               left.getImaginary() * right.getReal());
}
Complex operator/(const Complex &left, const Complex &right) {
    double denominator = right.getReal() * right.getReal() +
                                           right.getImaginary() * right.getImaginary();
    if(denominator == 0)
        throw runtime_error("除数不能为0!");
    else
        return Complex((left.getReal() * right.getReal() +
                                   left.getImaginary() * right.getImaginary()) / denominator,
                                   (left.getImaginary() * right.getReal() -
                                   left.getReal() * right.getImaginary()) / denominator);
}

int main() {
    Complex c1(7.7, 5.5), c2(4.2, -8.3);
    cout << "c1=";
    c1.print();
    cout << "c2=";
    c2.print();
    cout << "c1+54.3=";
    c2 = c1 + 54.3;
    c2.print();
	cout << "54.3+c1=";
    c2 = 54.3 + c1;
    c2.print();
	return 0;
}
