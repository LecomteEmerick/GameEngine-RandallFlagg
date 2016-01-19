#pragma once

#include "GameObject.h"

class GameObject;

template<class T> class Component
{
public:
	virtual ~Component() = 0;
	virtual T* Clone() const = 0;
protected:
	GameObject* GameObject;
};

