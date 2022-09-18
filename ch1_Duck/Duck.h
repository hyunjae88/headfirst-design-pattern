#pragma once

#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <memory>

class Duck
{
public:
	std::unique_ptr<FlyBehavior> _flyBehavior;
	std::unique_ptr<QuackBehavior> _quackBehavior;

protected:
	Duck(FlyBehavior* flyBehavior, QuackBehavior* quackBehavior);

public:
	virtual void display() const = 0;
	void performFly() const;
	void performQuack() const;
	void swim() const;

};

