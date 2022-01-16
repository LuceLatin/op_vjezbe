#pragma once
#include "zadatak2.hpp"
#include "Player.hpp"


class Game {
public:
	int human_players;
	int computer_players;
	int total = 0;
	int points = 2;
	bool gameover(Player* player);

	void calc(Player player) {
		total = total + player.coins_in_hand;
	}

	void winner(Player& player) {
		if (player.guess_number == total)
			player.total_score += 1;
	}
};