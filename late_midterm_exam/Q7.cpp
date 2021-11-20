#include<iostream>
using namespace std;

class Occupation{
    public:
        virtual void combo() = 0;
};

class Fighter : public Occupation{
    public:
        void slash(){}
        void kick(){}
        void pierce(){}
        void combo(){
            slash();
            kick();
            pierce();
        }
};

class Boxer : public Occupation{
    public:
        void jab(){}
        void straight(){}
        void combo(){
            jab();
            jab();
            straight();
        }
};

void combo(Occupation* occup){
    occup -> combo();
}//ポリモーフィズム

void Combo(Occupation* occup){
    Fighter* fighter = dynamic_cast<Fighter*>(occup);
    Boxer* boxer = dynamic_cast<Boxer*>(occup);
    if(fighter){
        fighter->slash();
        fighter->kick();
        fighter->pierce();
    }
    else if (boxer){
        boxer->jab();
        boxer->jab();
        boxer->straight();
    }
}

void fuga(){
    Fighter fighter;
    Boxer boxer;
    combo(&fighter);
    combo(&boxer);
}
int main(void){
    fuga();
}