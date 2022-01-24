#include <iostream>
using namespace std;

class Point{
private:
  int x, y, z;
public:
  Point() : x(0), y(0), z(0){}
  friend ostream& operator<<(ostream& out, const Point& p);
  friend istream& operator>>(istream& in, Point& p);
};

ostream& operator<<(ostream& out, const Point& p){
  out << p.x << " " << p.y << " " << p.z;
  return out;
}

istream& operator>>(istream& in, Point& p){
  in >> p.x >> p.y >> p.z;
  return in;
}

int main(){
  Point p;

  cout << "入力:";
  cin >> p;

  cout << "出力:" << p << endl;
}