#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    const char* str = "Pull up if I pull up";
    vector<char> palin;
    for(size_t i = 0; i < strlen(str); i++){
        palin.push_back(str[i]);
    }
    reverse(palin.begin(), palin.end());
    for(vector<char>::iterator it = palin.begin(); it != palin.end(); it++){
        cout << *it << " ";
    }
}