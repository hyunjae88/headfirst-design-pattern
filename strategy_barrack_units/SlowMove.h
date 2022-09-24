#pragma once
#include "MoveBehavior.h"
class SlowMove :
    public MoveBehavior
{
public:
    virtual void move() const;
};

