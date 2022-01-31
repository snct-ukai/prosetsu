#include <iostream>
using namespace std;

namespace janken{
    namespace gu{
        void speak(){cout << "ぐー" << endl;}
    }
    namespace tyoki{
        void speak(){cout << "ちょき" << endl;}
    }
    namespace pa{
        void speak(){cout << "ぱー" << endl;}
    }
}

int main(){
    using namespace janken;
    gu::speak();
    {
        using namespace tyoki;
        speak();
        pa::speak();
    }
}