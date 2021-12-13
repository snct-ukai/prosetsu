#include<iostream>
#include <fstream>
using namespace std;

int main(void){
    ifstream in("data.txt");

    double sum = 0;
    double d;
    while(in.eof()){
        in >> d;
        sum += d;
    }
    cout << sum << endl;
}