#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

int main(void){
    ofstream file;
    file.open("data.txt");
    double d;
    while(true){
        cin >> d;
        if(d != '\n'){
            file << d << endl;
            continue;
        }
        break;
    }
    file.close();
}