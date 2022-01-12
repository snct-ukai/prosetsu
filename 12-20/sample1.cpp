#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 3){
        cout << "ファイルを二つ指定してください。" << endl;
        return -1;
    }
    ifstream input(argv[1]);
    ofstream output(argv[2]);

    if(input.fail() & output.fail()){
        cerr << "ファイルが正常に読み込めませんでした" << endl;
        return -1;
    }

    while(!input.eof()){
        string str;
        input >> str;
        output << str;
    }
}
