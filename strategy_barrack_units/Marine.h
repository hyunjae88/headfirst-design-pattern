#pragma once
#include "BarracksUnit.h"

class Marine :
    public BarracksUnit
{
public:
    Marine();
    virtual void introducing() const;
};

