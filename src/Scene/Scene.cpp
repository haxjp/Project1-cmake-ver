#include "Scene.hpp"
#include "../Game.hpp"
    //Scene
    Scene::Scene(){
		scenes.push_back(this);
		scene_num = quantity;
		quantity++;
	}
	int Scene::getSceneNum() const {
		return scene_num;
	}   
    std::string Scene::getSceneName() const {
		return name;
	}

	void Scene::updateScene(){
		std::cout<<"To Return to Home,Press END."<<std::endl;
		if(Input::getKeyCondition(VK_END,true))
		Game::Change_sc(0);
		system("cls");
	}

    //Home
    Home::Home(){
        name = "Home";
    }

	void Home::updateScene() {
		static int num = 0;
		std::cout<<"please choose with <- or -> ,and Enter key to select. Now on choose "<<num<<" "<<std::endl;
		if(Input::getKeyCondition(VK_RIGHT,true)){
			if(num != Game::quantity_sc -1) num++;
			else 						 	num=0;
		}
		else if(Input::getKeyCondition(VK_LEFT,true)){
			if(num != 0) num--;
			else		 num=Game::quantity_sc-1;
		}
		else if(Input::getKeyCondition(VK_RETURN,true))
			Game::Change_sc(num);
		
		system("cls");
	}

    //Combat
    Combat::Combat(){
		name = "Combat";
	}
