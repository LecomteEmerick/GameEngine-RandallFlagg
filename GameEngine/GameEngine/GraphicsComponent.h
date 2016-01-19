#pragma once
#include "Component.h"

#include "GraphicEvent.h"

template<class T> class GraphicsComponent :
	public Component<T>
{
public:
	virtual void Draw(const GraphicEvent Event) const = 0;
	virtual T* Clone() const = 0;
};

