#pragma once
#include "../PCH.hpp"


class IScene{
protected:
	static inline size_t quantity = 0;
	int scene_num;
	std::string name;
};

class Scene :public IScene {
public:
	static inline std::vector<Scene*> scenes;

	static size_t getQuantity() {
		return quantity;
	}

	Scene();

	int getSceneNum() const;

	std::string getSceneName() const;

	virtual void updateScene();

};

class Home :public Scene {
public:
	Home();

	void updateScene() override;
};

class Combat :public Scene {
public:
	Combat();

};
