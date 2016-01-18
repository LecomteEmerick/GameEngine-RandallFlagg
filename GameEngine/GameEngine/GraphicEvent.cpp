#include "GraphicEvent.h"

GraphicEvent::GraphicEvent(void* sender, glm::mat4 viewMatrix, glm::mat4 projectionMatrix) : Sender(sender), ViewMatrix_(viewMatrix), ProjectionMatrix_(projectionMatrix)
{

}

GraphicEvent::~GraphicEvent()
{

}