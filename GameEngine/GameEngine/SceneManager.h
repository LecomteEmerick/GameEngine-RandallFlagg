#pragma once

#include <map>

#include "Scene.h"

class SceneManager
{
public:
	SceneManager();
	void LoadSceneTab();
	~SceneManager();
private:
	std::map<char*, Scene> SceneList;
};

