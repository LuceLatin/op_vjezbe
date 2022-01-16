#include "zadatak2.hpp"

#include "ComputerPlayer.hpp"
#include "HumanPlayer.hpp"
#include "Game.hpp"
#include "Player.hpp"
#include "zadatak2.hpp"
#include "Animal.hpp"
#include "Spider_Animal.hpp"
#include "Bird_Animal.hpp"
#include "Insect_Animal.hpp"
#include "Pigeon.hpp"
#include "Ladybug.hpp"
#include "Tarantula.hpp"
#include "Sparrow.hpp"
#include "Owel.hpp"
#include "House_spider.hpp"
#include "Fly.hpp"
#include "Counter.hpp"
#include "Black_widow.hpp"
#include "Cockroach.hpp"

bool Game::gameover(Player* player)
{
	for (int i = 0; i < (human_players + computer_players); i++) {
		if (player[i].total_score == points) {
			cout << "Player " << i << " won";
			return true;
		}
	}
	return false;
}