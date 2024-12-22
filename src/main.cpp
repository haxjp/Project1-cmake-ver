#include "./PCH.hpp"
#include "Game.hpp"
#include "Scene/Scene.hpp"

int main() {
	std::unique_ptr<Scene> home = std::make_unique<Home>();
	std::unique_ptr<Scene> combat = std::make_unique<Combat>();
	std::unique_ptr<Scene> combat2 = std::make_unique<Combat>();
	std::unique_ptr<Scene> combat3 = std::make_unique<Combat>();

	Game game;

	for (;;) { 
		game.Handle_sc();
	}

}