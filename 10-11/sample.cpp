#include<iostream>
using namespace std;

class Vector2{
    private:
        int x;
        int y;
    public:
        Vector2(int x = 0, int y = 0){
            this->x = x;
            this->y = y;
        }
        void show(){
            cout << "(" << x << "," << y << ")" << endl;
        }
        int operator*(const Vector2& v){
            return (x*v.x + y*v.y);
        }
        Vector2 operator*(const int& num){
            return Vector2(x*num, y*num);
        }
        friend Vector2 operator*(const int& num,const Vector2& v);
        Vector2 operator+(const Vector2& v){
            return Vector2(x + v.x, y + v.y);
        }
        Vector2 operator++(){
            return Vector2(++x, ++y);
        }
        Vector2 operator++(int d){
            return Vector2(++x, ++y);
        }
        Vector2 operator+(){
            return *this;
        }
        Vector2 operator-(){
            return Vector2(-x, -y);
        }
};
Vector2 operator*(const int& num,const Vector2& v){
    return Vector2(num*v.x, num*v.y);
}

int main(){
    Vector2 v1(1,3);
    Vector2 v2(5,2);
    Vector2 v;

    ++v1;
	v = 2 * v1 + (-v1) * (+v2 * v1);
    v++;
    v.show();

    return 0;
}