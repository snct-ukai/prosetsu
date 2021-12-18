#include <iostream>
#include <string>
using namespace std;

class Pet{
    static unsigned int num;
    string name;
    public:
    Pet(const string& n){
        num++;
        name = n;
    }
    void Name(){
        cout << name << endl;
    }
    unsigned int pet_num(){
        return num;
    }
    ~Pet(){
        num--;
    }
};