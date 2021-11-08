#include<iostream>
using namespace std;

class Complex{
    private:
        double re;
        double im;
    public:
        Complex(double re = 0, double im = 0) : re(re), im(im){}
        Complex(const Complex& C) : re(C.re), im(C.im){}
        void show(){
            cout << re << "+" << im << "i" << endl;
        }
        Complex& operator+(const Complex& C){
            return Complex(re + C.re, im + C.im);
        }
        Complex& operator+(const double& d){
            return Complex(re + d, im);
        }
        Complex& operator-(const Complex& C){
            return Complex(re - C.re, im - C.im);
        }
        Complex& operator-(const double& d){
            return Complex(re - d, im);
        }
        Complex& operator*(const Complex& C){
            return Complex(re * C.re - im * C.im, re * C.im + im * C.re);
        }
        Complex& operator*(const double& d){
            return Complex(re * d, im * d);
        }
        Complex& operator/(const Complex& C){
            return Complex((re * C.re + im * C.im) / (C.re * C.re + C.im * C.im) , (im * C.re - re * C.im) / (C.re * C.re + C.im * C.im));
        }
        Complex& operator/(const double& d){
            return Complex(re / d, im / d);
        }
        Complex operator-(){
            Complex c(-re, -im);
            return c;
        }
        Complex operator+(){
            return *this;
        }

        friend Complex& operator+(const double& d, const Complex& C);
        friend Complex& operator-(const double& d, const Complex& C);
        friend Complex& operator*(const double& d, const Complex& C);
        friend Complex& operator/(const double& d, const Complex& C);
        void operator=(const Complex& C){
            re = C.re;
            im = C.im;
        }
};

Complex& operator+(const double& d, const Complex& C){
    return Complex(C.re + d, C.im);
}

Complex& operator-(const double& d, const Complex& C){
    return Complex(C.re - d, C.im);
}

Complex& operator*(const double& d, const Complex& C){
    return Complex(C.re * d, C.im * d);
}

Complex& operator/(const double& d, const Complex& C){
    return Complex(C.re / d, C.im / d);
}

int main(void){
    Complex c1(1.1,2.2);
    Complex c2(-4.0, 0.5);
    Complex c;

    c = 1.2 + c1 * 3.4 - 0.1 * c1 * c2 / c1 + (-c2 / 5.6 + 7.8);
    c.show();
}