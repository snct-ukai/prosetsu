#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

int main(void){
    ofstream file;
    file.open("data.txt");
    double d;
    string s;
    while(true){
        cin >> s;
        if(s.length()){
            d = stod(s);
            file << d;
            continue;
        }
        break;
    }
    file.close();
}