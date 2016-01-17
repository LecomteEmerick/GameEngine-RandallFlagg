#include "SceneManager.h"

#include <iostream>

#include "boost\filesystem.hpp"

SceneManager::SceneManager()
{

}

void SceneManager::LoadSceneTab()
{
	boost::filesystem::path p("scene/");
	boost::filesystem::directory_iterator end_itr;

	for (boost::filesystem::directory_iterator itr(p); itr != end_itr; ++itr)
	{
		if (boost::filesystem::is_regular_file(itr->path()) && itr->path().extension() == ".scene") {
			this->SceneList.insert(std::pair<char*, Scene>( itr->path().filename().c_str()], Scene()));
		}
	}
}

SceneManager::~SceneManager()
{
}
