#pragma once
#include "Event.h"

#include "glm.hpp"

class GraphicEvent :
	public Event
{
public:
	GraphicEvent(void* Sender, glm::mat4 ViewMatrix, glm::mat4 ProjectionMatrix);
	~GraphicEvent();
private:
	void* Sender;
	glm::mat4 ViewMatrix_;
	glm::mat4 ProjectionMatrix_;
};

