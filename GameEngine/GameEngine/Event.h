#pragma once
class Event
{
public:
	virtual ~Event()=0;
private:
	(void*) Sender;
};

