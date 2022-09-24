#include "Marine.h"

#include <iostream>

#include "AttackMachineGun.h"
#include "FastMove.h"

constexpr int marineEnergy = 100;

Marine::Marine():BarracksUnit(new AttackMachineGun(), new FastMove(), marineEnergy)
{

}

void Marine::introducing() const
{
	std::cout << "I'm Marine unit" << std::endl;
}