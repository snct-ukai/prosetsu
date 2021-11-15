#include<iostream>
#include<vector>
#include<random>
#include<algorithm>
using namespace std;

class Score{
    private:
        vector<int> subscore;

    public:
        void set(const vector<int>& s){
            subscore = s;
        }

        vector<int>& get(){
            return subscore;
        }

        int total() const{
            int sum = 0;
            for(auto it = subscore.begin(); it != subscore.end(); it++){
                sum += *it;
            }
            return sum;
        }

        bool operator<(const Score& s) const{
            return (*this).total() < s.total();
        }

        void show(){
            for(auto it = subscore.begin(); it != subscore.end(); it++){
                cout << *it << " ";
            }
            cout << "：" << this->total();
        }
};

int main(void){
    random_device rnd;
    mt19937_64 mt(rnd());
    uniform_real_distribution<> sr(0,10);

    int nplayer;
    int nsubscore;

    cout << "選手の人数：";
    cin >> nplayer;
    cout << "評価数の数：";
    cin >> nsubscore;
    vector<Score> players;

    for(int i = 0; i < nplayer; i++){
        Score score;
        vector<int> s;
        for(int i = 0; i < nsubscore; i++){
            s.push_back(sr(mt));
        }
        score.set(s);
    }

    for(auto it = players.begin(); it != players.end(); it++){
        (*it).show();
        cout << endl;
    }

    cout << "-----------------------" << endl;

    sort(players.begin(), players.end());
    
    for(auto it = players.begin(); it != players.end(); it++){
        (*it).show();
        cout << endl;
    }
}