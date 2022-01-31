#include <iostream>
using namespace std;

class Ball{
    public:
    enum class TYPE {
        BASCKETBALL,
        BASEBALL,
        TENNISBALL
    };
};

class BascketBall : public Ball{};

class BaseBall : public Ball{};

class TennisBall : public Ball{};