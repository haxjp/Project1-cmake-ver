#include "Game.hpp"

    Game::Game() {
		quantity_sc = Scene::getQuantity();
		int sc_count = 0;
		current_sc = Scene::scenes.at(sc_count);
	}

	void Game::Handle_sc() const{
		current_sc->updateScene();
	}