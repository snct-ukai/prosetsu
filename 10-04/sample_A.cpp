#include <iostream>
using namespace std;

//経験値クラス
class Occupation{
    public:
        int exp;
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
    public :
        void castSpell() {cout << "cure spell" << endl;}
};

//盗賊クラス
class Thief : public Occupation{
    public :
        void release() {cout << "release" << endl;}
};

//司教クラス
class Bishop : public Mage, public Priest{};

//忍者クラス
class Ninja : public Fighter, public Thief{};

int main(){
    Fighter taro;
    Bishop shikyo;
    Ninja ninja;

    taro.slash();
    taro.exp += 10;

    taro.slash();
    taro.exp += 10;

    shikyo.Mage::castSpell();
    shikyo.Mage::exp += 10;

    ninja.release();
    ninja.Thief::exp += 10;

    return 0;
}