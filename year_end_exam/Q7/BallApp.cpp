#include "BallApp.h"
#include "BallFactory.h"

void BallApp::init(){
    int r;
    /*---------------------*/
    Ball* b;
    if(r < 1){
        b = BallFactory::create(Ball::TYPE::BASCKETBALL);
    }
    else if(r < 4){
        b = BallFactory::create(Ball::TYPE::BASEBALL);
    }
    else{
        b = BallFactory::create(Ball::TYPE::TENNISBALL);
    }
}