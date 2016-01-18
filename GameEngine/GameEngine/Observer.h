#pragma once

#include "Event.h"

class Observer
{
public:
	virtual void fire(Event value) = 0;
};

