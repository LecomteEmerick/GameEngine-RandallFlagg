#include <iostream>

#include "GameData.h"

int main(int argc, char **argv)
{
	GameData* data = new GameData();
	GameData::get()->getLogManager()->WriteLog("Log depuis le main !");
	system("pause");
}