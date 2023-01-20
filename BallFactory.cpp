#include "BallFactory.h"
#include "BaseBall.h"
#include "BasketBall.h"
#include "TennisBall.h"

Ball* BallFactory::create(Ball::TYPE type)
{
switch (type) {
case Ball::TYPE::BASEBALL:
return new BaseBall;
case Ball::TYPE::BASKETBALL:
return new BasketBall;
case Ball::TYPE::TENNISBALL:
return new TennisBall;
}
return nullptr;
}