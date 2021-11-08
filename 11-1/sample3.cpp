#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    vector<unsigned char> str;//(ア)

    //(イ)
    str.push_back('p');
    str.push_back('r');
    str.push_back('o');
    str.push_back('g');
    str.push_back('r');
    str.push_back('a');
    str.push_back('m');

    //(ウ)
    for(unsigned int i = 0; i < str.size(); i++)
        cout << str[i] << " ";

    cout << endl;

    //(エ)
    vector<unsigned char>::iterator i = find(str.begin(), str.end(), 'r');
    cout << distance(str.begin(), i) << endl;

    //(オ)
    sort(str.begin(), str.end());

    //(カ)
    for(vector<unsigned char>::iterator it = str.begin(); it != str.end(); it++)
        cout << *it << " ";
    
    cout << endl;
}