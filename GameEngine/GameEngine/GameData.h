#pragma once

#include "LogManager.h"
#include "SceneManager.h"

class GameData
{
public:
	GameData();
	static GameData* get() { return instance; }

	LogManager* getLogManager() { return this->gLogManager; }
	SceneManager* getSceneManger() { return this->gSceneManager; }

	~GameData();
private:

	void Initialize();

	LogManager* gLogManager;
	SceneManager* gSceneManager;
	static GameData* instance;
};

