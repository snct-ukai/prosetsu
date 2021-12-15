#include <iostream>
using namespace std;

class Point{
    double x, y, z;
    friend istream& operator>>(istream& s, Point& P);
    friend ostream& operator<<(ostream& s, const Point& P);
};

istream& operator>>(istream& s, Point& P){
    s >> P.x >> P.y >> P.z;
    return s;
}

ostream& operator<<(ostream& s, const Point& P){
    s << P.x << " " << P.y << " " << P.z;
    return s;
}

int main(void){
    Point p;
    cout << "入力：";
    cin >> p;

    cout << "出力：" << p << endl;
}