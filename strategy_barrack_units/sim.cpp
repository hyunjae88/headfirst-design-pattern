#include <iostream>
#include <memory>

#include "FireBat.h"
#include "Marine.h"

int main()
{
	std::cout << "<barrack units examples>" << std::endl;

	Marine marine1;
	FireBat firebat1;

	marine1.introducing();
	marine1.attack();
	marine1.move();
	marine1.showEnergy();


	firebat1.introducing();
	firebat1.attack();
	firebat1.move();  
	firebat1.showEnergy();

	marine1.gotDamage(20);


	return 0;
}