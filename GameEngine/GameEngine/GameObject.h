#pragma once

#include <vector>
#include <string>

#include "Transform.h"
#include "Component.h"

template<class T> class Component;

class GameObject
{
public:
	GameObject();
	~GameObject();
private:
	std::string Name;
	std::vector<Component<class T>*> Components;
	Transform Transform;
};

