#include <iostream>
#include <memory>

#include "MallardDuck.h"

int main()
{
	std::unique_ptr<MallardDuck> mallard(new MallardDuck());
	std::unique_ptr<MallardDuck> mallard2(std::make_unique<MallardDuck>());

	mallard->display();
	mallard->performFly();
	mallard->performQuack();

	mallard->display();
	mallard2->performFly();
	mallard2->performQuack();

	return 0;
}