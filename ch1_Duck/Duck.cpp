#include "Duck.h"
#include <iostream>

Duck::Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior) :
	_flyBehavior(flyBehavior), _quackBehavior(quackBehavior)
{
}

void Duck::performFly() const
{
	_flyBehavior->fly();
}

void Duck::performQuack() const
{
	_quackBehavior->quack();
}

void Duck::swim() const
{
	std::cout << "I can swim" << std::endl;
}