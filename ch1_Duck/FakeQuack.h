#pragma once
#include "QuackBehavior.h"
class FakeQuack :
    public QuackBehavior
{
public:
    virtual void quack() const;
};

