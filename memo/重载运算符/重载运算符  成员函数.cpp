#include <iostream>
#include <stdexcept>
using namespace std;

class Complex {
public:
    Complex(double newReal = 0, double newImaginary = 0);
    Complex operator+(const Complex &right);
    Complex operator-(const Complex &right);
    Complex operator*(const Complex &right);
    Complex operator/(const Complex &right);
    void print() const;
private:
    double realPart;                 // 实部
    double imaginaryPart;            // 虚部
};

Complex::Complex(double newReal, double newImaginary) {
    realPart = newReal;
    imaginaryPart = newImaginary;
}
Complex Complex::operator+(const Complex &right) {   
    return Complex(realPart + right.realPart,
                               imaginaryPart + right.imaginaryPart);
}
Complex Complex::operator-(const Complex &right) {
    return Complex(realPart - right.realPart,
                               imaginaryPart - right.imaginaryPart);
}
Complex Complex::operator*(const Complex &right) {
    return Complex(realPart * right.realPart -
                               imaginaryPart * right.imaginaryPart,
                               realPart * right.imaginaryPart +
                               imaginaryPart * right.realPart);
}
Complex Complex::operator/(const Complex &right) {
    double denominator = right.realPart * right.realPart +
                                          right.imaginaryPart * right.imaginaryPart;
    if(denominator == 0)
        throw runtime_error("除数不能为0!");
    else
        return Complex((realPart * right.realPart +
                                   imaginaryPart * right.imaginaryPart) / denominator,
                                  (imaginaryPart * right.realPart -
                                   realPart * right.imaginaryPart) / denominator);
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



int main() {
    Complex c1(7.7, 5.5), c2(4.2, -8.3), c3;
    cout << "c1=";
    c1.print();
    cout << "c2=";
    c2.print();
    cout << "c1+c2=";
    c3 = c1 + c2;
    c3.print();
	cout << "c1-c2=";
    c3 = c1 - c2;
    c3.print();
	cout << "c1*c2=";
    c3 = c1 * c2;
    c3.print();
	cout << "c1/c2=";
    c3 = c1 / c2;
    c3.print();
    return 0;
}
