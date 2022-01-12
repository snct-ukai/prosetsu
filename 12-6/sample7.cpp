#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;

int main(void){
    ifstream file("timedata.txt");

    cout << setprecision(2);
    cout << "-----------" << endl;
    cout << "| n|     s|" << endl;
    int count = 0;
    while(!file.eof()){
        string str;
        getline(file,str);
        stringstream ss;
        ss << str;
        ss >> str;
        cout << "|";
        cout.width(2);
        cout << str << "|";
        ss >> str;
        cout.width(6);
        cout << str << "|" << endl;
    }
    cout << "-----------" << endl;
}