#include<iostream>
#include<stdexcept>
using namespace std;

int main(void){
    int month, day;
    cout << "今日は何月？";
    cin >> month;
    cout << "今日は何日？";
    cin >> day;
    try{
        if(month < 1 || month > 12){
            throw out_of_range("月の入力値がおかしい\n");
        }
        if(day < 1 || day > 31){
            throw out_of_range("日の入力値がおかしい\n");
        }
    }
    catch(const exception& err){
        cout << err.what() << endl;
        return -1;
    }
    cout << "今日は" << month << "月" << day << "日です" << endl;
}