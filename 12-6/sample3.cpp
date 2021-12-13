#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

int main(void){
    ofstream file;
    file.open("data.txt");
    double d;
    while(true){
        try{
            cin >> d;
            file << d << endl;
        }
        catch(exception e){
            break;
        }
    }
    file.close();
}