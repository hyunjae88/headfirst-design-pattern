#include "BarracksUnit.h"
#include <iostream>
BarracksUnit::BarracksUnit(AttackBehavior* attackBehavior, MoveBehavior* moveBehavior, int energy)
	:_attackBehavior(attackBehavior), _moveBehavior(moveBehavior), _energy(energy)
{

}

void BarracksUnit::attack() const
{
	_attackBehavior->attack();
}

void BarracksUnit::move() const
{
	_moveBehavior->move();
}

void BarracksUnit::showEnergy() const
{
	std::cout << "My Energy : " << _energy << std::endl;
}

int BarracksUnit::gotDamage(int damage)
{
	_energy -= damage;
	std::cout << "After damage energy : " << _energy << std::endl;
	return _energy;
}