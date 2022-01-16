#pragma once
#include "zadatak2.hpp"
#include "Player.hpp"
#include "Game.hpp"


class HumanPlayer : public Player {
public:
	void coins();
	void guess(Game game);
};