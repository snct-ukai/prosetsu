#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;

int main(void){
    ofstream output("output.txt");
    string str = "Department of Electronic and Infomation Engineering";
    stringstream ss;
    ss << str;
    while(!ss.eof()){
        string S;
        ss >> S;
        output << S << endl;
    }
    output.close();
}