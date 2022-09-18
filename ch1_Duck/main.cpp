#include <iostream>
#include <memory>

#include "MallardDuck.h"

int main()
{
	std::unique_ptr<MallardDuck> mallard(new MallardDuck());


	mallard->performFly();
	mallard->performQuack();



	return 0;
}