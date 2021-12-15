#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void){
    ifstream file("timedata.txt");

    cout << setprecision(2);
    cout << "-----------" << endl;
    cout << "| n|     s|" << endl;
    int count = 0;
    while(!file.eof()){
        switch(count%2){
            case 0:
                cout << setprecision(2);
                break;
            case 1:

                break;
        }
    }
}