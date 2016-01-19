#pragma once

#include "glew.h"

#include "GraphicsComponent.h"
#include "GraphicsEvent.h"

class Renderer :
	public GraphicsComponent<Renderer>
{
public:
	Renderer();

	void Draw(const GraphicEvent Event) const;
	Renderer* Clone() const;

	~Renderer();
private:

};

