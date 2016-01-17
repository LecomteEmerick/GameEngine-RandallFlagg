#include "LogManager.h"

#include <iostream>

#include "boost/date_time/gregorian/gregorian.hpp"

LogManager::LogManager()
{
	this->LogFile.open(this->LogFilePath);
	this->LogFile << "------ Starting session : " << boost::gregorian::day_clock::local_day() << " ------ "<< std::endl;
}

void LogManager::WriteLog(char* Message)
{
	this->LogFile << "Log Message : " << Message << std::endl;
}

LogManager::~LogManager()
{

}
