#include <iostream>
using namespace std;

//経験値クラス
class Occupation{
    public:
        int exp;
        
        Occupation(){
            exp = 0;
        }
};

//戦士クラス
class Fighter : public Occupation{
    public:
        void slash() {cout << "slash" << endl;}
};

//魔術師クラス
class Mage : public Occupation{
    public:
        void castSpell() {cout << "attack spell" << endl;}
};

//僧侶クラス
class Priest : public Occupation{
    public:
        void castSpell() {cout << "cure spell" << endl;}
};

//盗賊クラス
class Thief : public Occupation{
    public:
        void release() {cout << "release" << endl;}
};

//司教クラス
class Bishop : public Mage, public Priest{};

//侍クラス
class Samurai : public Fighter, public Mage{};

//君主クラス
class Load : public Fighter, public Priest{};

//忍者クラス
class Ninja : public Fighter, public Thief{};

int main(){
    return 0;
}