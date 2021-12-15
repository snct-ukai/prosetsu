#include<iostream>
#include <fstream>
using namespace std;

int main(void){
    ifstream in("data.txt");

    double sum = 0;
    while(in.eof()){
        double d = 0;
        in >> d;
        sum += d;
    }

    cout << sum << endl;
}