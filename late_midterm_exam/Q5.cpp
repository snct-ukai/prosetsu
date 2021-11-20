#include<iostream>
using namespace std;

class Minute{
    private:
        int minute;
    public:
        Minute(){minute = 0;}
        Minute(int m){minute = m;}
        Minute& operator=(int m){
            minute = m;
            return *this;
        }
        Minute& operator=(const Minute& min){
            minute = min.minute;
            return *this;
        }
        operator int(){
            return minute;
        }
        Minute operator+(const Minute& min){
            return(Minute(minute + min.minute));
        }
        Minute operator++(int d){
            return Minute(minute++);
        }
        friend Minute operator+(int m, const Minute& min);
};

Minute operator+(int m, const Minute& min){
    return(Minute(m + min.minute));
}

int main(void)
{
    Minute a;
    Minute b = 3; // (A)
    Minute c;
    int d;
    a = 20; // (B)
    c = a + b; // (C)
    b = 10 + c; // (D)
    b++; // (E)
    d = b; // (F)
}