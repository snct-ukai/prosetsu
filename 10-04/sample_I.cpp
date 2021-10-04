#include <iostream>
using namespace std;

//経験値クラス
class Occupation{
    public:
        int exp;
};

//戦士クラス
class Fighter : public virtual Occupation{
    public:
        void slash() {cout << "slash" << endl;}
};

//魔術師クラス
class Mage : public virtual Occupation{
    public:
        void castSpell() {cout << "attack spell" << endl;}
};

//僧侶クラス
class Priest : public virtual Occupation{
    public :
        void castSpell() {cout << "cure spell" << endl;}
};

//盗賊クラス
class Thief : public virtual Occupation{
    public :
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
    Fighter taro;
    Bishop shikyo;
    Ninja ninja;

    taro.slash();
    taro.exp += 10;

    taro.slash();
    taro.exp += 10;

    shikyo.Mage::castSpell();
    shikyo.exp += 10;

    ninja.release();
    ninja.exp += 10;

    return 0;
}