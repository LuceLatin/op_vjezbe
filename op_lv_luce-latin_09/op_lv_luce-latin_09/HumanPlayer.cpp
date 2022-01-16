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

void HumanPlayer::coins()
{
	int coin;
	cout << "Enter sum of coins you want: ";
	cin >> coin;
	while ((coin != 8) && (coin != 3) && (coin != 6) && (coin != 5) && (coin != 1) && (coin != 2) && (coin != 7) && (coin != 0)) {
		cout << "You cannot entered that number of sum, try again with another sum: ";
		cin >> coin;
	}
	coins_in_hand = coin;
}

void HumanPlayer::guess(Game game)
{
	int total;
	cout << "Guess - total sum of coins: " << endl;
	cin >> total;
	cout << endl;
	while (total > ((game.human_players + game.computer_players) * 8)) {
		cout << "Too big sum, please try again another sum: ";
	}
	guess_number = total;

}