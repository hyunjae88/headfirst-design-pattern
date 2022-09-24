#include "FireBat.h"

#include <iostream>

#include "AttackFire.h"
#include "SlowMove.h"

constexpr int firabatEnergy = 110;

FireBat::FireBat() :BarracksUnit(new AttackFire(), new SlowMove(), firabatEnergy)
{

}

void FireBat::introducing() const
{
	std::cout << "I'm firebat~! strong!" << std::endl;
}