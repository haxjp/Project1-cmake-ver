#pragma once
#include "PCH.hpp"

class Game {
public:
	static inline size_t quantity_sc;
	static inline int sc_count;
	static inline Scene* current_sc;

	static void Change_sc(int num){
		sc_count = num;
		current_sc = Scene::scenes.at(sc_count);
	};


	Game();

	void Handle_sc() const;


};