#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include <memory>
#include <iostream>

MallardDuck::MallardDuck():Duck(new FlyWithWings(), new Quack())
{

}

void MallardDuck::display() const
{
	std::cout << "I'm MallardDuck" << std::endl;
}