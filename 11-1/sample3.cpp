#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    vector<unsigned char> str;

    str.push_back('p');
    str.push_back('r');
    str.push_back('o');
    str.push_back('g');
    str.push_back('r');
    str.push_back('a');
    str.push_back('m');

    cout << str.size() << endl;

    cout << distance(str.begin(), find(str.begin(), str.end(), 'r')) << endl;

    sort(str.begin(), str.end());

    for(vector<unsigned char>::iterator it = str.begin(); it != str.end(); it++)
        cout << *it << " ";
    cout << endl;
}