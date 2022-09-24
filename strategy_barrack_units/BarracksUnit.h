#pragma once

#include <memory>
#include "AttackBehavior.h"
#include "MoveBehavior.h"

class BarracksUnit
{
public:
	std::unique_ptr<AttackBehavior> _attackBehavior;
	std::unique_ptr<MoveBehavior> _moveBehavior;

protected:
	BarracksUnit(AttackBehavior* attackBehavior, MoveBehavior* moveBehavior, int energy);

private:
	int _energy;

public:
	virtual void introducing() const = 0;
	void attack() const;
	void move() const;
	int gotDamage(int damage);

	void showEnergy() const;
};

