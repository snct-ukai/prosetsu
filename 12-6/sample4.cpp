#include<iostream>
#include <fstream>
using namespace std;

int main(void){
    ifstream in("data.txt");

    double sum = 0;
    while(true){
        double d;
        try{
            in >> d;
        }catch(exception e){
            break;
        }
    }
}