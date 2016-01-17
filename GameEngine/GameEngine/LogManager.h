#pragma once

#include <fstream>
#include <string>

class LogManager
{
public:
	LogManager();
	void WriteLog(char* Message);
	~LogManager();
private:
	std::ofstream LogFile;
	std::string LogFilePath = "DebugLog.log";
};

