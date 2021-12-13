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
        if(s[0] == '\n'){
            break;
        }
        d = stod(s);
    }
    file.close();
}