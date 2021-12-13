#include<iostream>
#include <fstream>
using namespace std;

int main(void){
    ifstream in;
    in.open("data.txt");

    double sum = 0;
    double d;
    while(in.eof()){
        in >> d;
        sum += d;
        cout << d << endl;
    }
    cout << sum << endl;
    in.close();
}