#pragma once
#include "zadatak2.hpp"
#include "Player.hpp"
#include "Game.hpp"

class ComputerPlayer : public Player {
public:
	void set_random(Game game);
};