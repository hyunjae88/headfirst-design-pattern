#pragma once
#include "AttackBehavior.h"

class AttackMachineGun :
    public AttackBehavior
{
public:
    virtual void attack() const;
};

