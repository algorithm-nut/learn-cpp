#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    Point(double x = 0, double y = 0);
    double getX() const;
    double getY() const;
private:
    double x;
    double y;
friend class AccessPoint;  //声明友元类 
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

/*声明友元类*/
class AccessPoint {
    public:
        double distance(const Point &p1, const Point &p2) {
            return sqrt((p1.x - p2.x) * (p1.x - p2.x) +
                               (p1.y - p2.y) * (p1.y - p2.y));
        }
};
int main() {
    Point p1(1, 1);
    Point p2(4, 5);
    AccessPoint ap;
    cout << "两点之间的距离: " << ap.distance(p1, p2) << endl;
    return 0;
}

