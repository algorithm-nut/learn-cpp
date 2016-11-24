#include <iostream>
#include <stdexcept>
using namespace std;

using namespace std;
class Complex {
public:
    Complex(double newReal = 0, double newImaginary = 0);
    double getReal() const;
    double getImaginary() const;
private:
    double realPart;                 // ʵ��
    double imaginaryPart;            // �鲿
friend Complex operator+(const Complex &left, const Complex &right);
friend Complex operator-(const Complex &left, const Complex &right);
friend Complex operator*(const Complex &left, const Complex &right);
friend Complex operator/(const Complex &left, const Complex &right);
friend istream &operator>>(istream &in, Complex &c);
friend ostream &operator<<(ostream &out, const Complex &c);
};

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
Complex operator+(const Complex &left, const Complex &right) {
    return Complex(left.realPart + right.realPart,
		                      left.imaginaryPart + right.imaginaryPart);
}
Complex operator-(const Complex &left, const Complex &right) {
    return Complex(left.realPart - right.realPart,
                              left.imaginaryPart - right.imaginaryPart);
}
Complex operator*(const Complex &left, const Complex &right) {
    return Complex(left.realPart * right.realPart -
                              left.imaginaryPart * right.imaginaryPart,
                              left.realPart * right.imaginaryPart +
                              left.imaginaryPart * right.realPart);
}
Complex operator/(const Complex &left, const Complex &right) {
    double denominator = right.realPart * right.realPart +
                                          right.imaginaryPart * right.imaginaryPart;
    if(denominator == 0)
        throw runtime_error("��������Ϊ0!");
    else
        return Complex((left.realPart * right.realPart +
                                   left.imaginaryPart * right.imaginaryPart) / denominator,
                                   (left.imaginaryPart * right.realPart -
                                   left.realPart * right.imaginaryPart) / denominator);
}
istream &operator>>(istream &in, Complex &c) {   //����Ԫ��������>>����� �����ô��� 
    in >> c.realPart >> c.imaginaryPart;  
    return in;
}
ostream &operator<<(ostream &out, const Complex &c) {
    if(c.realPart == 0 && c.imaginaryPart == 0)
        out << c.realPart << endl;
    if(c.realPart && c.imaginaryPart > 0)
        out << c.realPart << "+" << c.imaginaryPart << "i" << endl;
    if(c.realPart && c.imaginaryPart < 0)
        out << c.realPart << c.imaginaryPart << "i" << endl;
    if(c.realPart && c.imaginaryPart == 0)
        out << c.realPart << endl;
    if(c.realPart == 0 && c.imaginaryPart)
        out << c.imaginaryPart << "i" << endl;
    return out;
}

int main() {
    Complex c1, c2;
    cout << "���븴��c1��ʵ�����鲿: ";
    cin >> c1;
    cout << "���븴��c2��ʵ�����鲿: ";
    cin >> c2;
    cout << "c1=" << c1;
    cout << "c2=" << c2;
	cout << "c1+c2=" << c1 + c2;
	cout << "c1-c2=" << c1 - c2;
	cout << "c1*c2=" << c1 * c2;
	cout << "c1/c2=" << c1 / c2;
    cout << "c1+54.3=" << c1 + 54.3;
    cout << "54.3+c1=" << 54.3 + c1;
    return 0;
}
