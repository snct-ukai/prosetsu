#include <iostream>
#include <string>
using namespace std;

class Date {
    int month;
    int day;
public:
    void setMonth(int m) {
        if(m < 1 || m > 12){
            throw "月の入力値がおかしい\n";
        }
        month = m;
    }
    void setDay(int d) {
        if(d < 1 || d > 31){
            throw "日の入力値がおかしい\n";
        }
        day = d;
    }
    string format() {
        return to_string(month) + "月" + to_string(day) + "日";
    }
};

int main()
{
    Date date;
    int month, day;
    cout << "今月は何月? ";
    cin >> month;
    cout << "今日は何日? ";
    cin >> day;
    try{
        date.setMonth(month);
        date.setDay(day);
    }
    catch(const char*& err){
        cout << err << endl;
        return -1;
    }
    cout << "今日は" << date.format() << "です。" << endl;
    return 0;
}
