#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cout << "ファイルを二つ指定してください。" << endl;
        return;
    }
    ifstream input(argv[0]);
    ofstream output(argv[1]);

    while(!input.eof()){
        string str;
        input >> str;
        output << str;
    }
}