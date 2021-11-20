#include<iostream>
using namespace std;

class Occupation{
    public:
        int life;
        Occupation(){
            life = 0;
        }
};

class Mage : public virtual Occupation{
    public:
        void castSpell(){
            cout << "atack spell" << endl;
        }
};

class Priest : public virtual Occupation{
    public:
        void castSpell(){
            cout << "cure spell" << endl;
        }
};

class Bishop : public Priest, public Mage{};

void hoge(){
    Bishop keita;

    keita.Mage::castSpell();

    keita.Bishop::life += 10;
    keita.Priest::life += 20;

    cout << keita.life << endl;
}

int main(void){
    hoge();
}
/*
(イ)仮想基本クラス
(エ)30
*/