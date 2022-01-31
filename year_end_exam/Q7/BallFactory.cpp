#include "BallFactory.h"

Ball* BallFactory::create(Ball::TYPE type){
    switch(type){
    case Ball::TYPE::BASCKETBALL:
        return new BascketBall;
    case Ball::TYPE::BASEBALL:
        return new BaseBall;
    case Ball::TYPE::TENNISBALL:
        return new TennisBall;
    }
}