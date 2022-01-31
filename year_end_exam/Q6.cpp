#include <iostream>
using namespace std;

class Hoge{
    public:
    int val1;
    int val2;
};

class Fuga{
    public:
    int val1;
    static int val2;
};

int Fuga::val2;

int main(){
    Hoge hoge;
    Fuga fuga1, fuga2;
}
/*
sizeof(Hoge):8byte
sizeof(Fuga):4byte
*/