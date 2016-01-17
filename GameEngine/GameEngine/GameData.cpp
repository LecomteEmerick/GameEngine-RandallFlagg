#include "GameData.h"

GameData* GameData::instance;

GameData::GameData()
{
	if (GameData::instance == nullptr)
	{
		GameData::instance = this;
		this->Initialize();
	}
}

void GameData::Initialize()
{
	this->gLogManager = new LogManager();
	this->gSceneManager = new SceneManager();
}

GameData::~GameData()
{
	delete gLogManager;
	delete gSceneManager;
	delete instance;
}
