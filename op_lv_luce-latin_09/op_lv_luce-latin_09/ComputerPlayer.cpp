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

void ComputerPlayer::set_random(Game game)
{
	srand(time(NULL));
	int arr[] = { 8, 6, 2, 3, 5, 1, 7, 0 };
	int random = rand() % 4;
	coins_in_hand = arr[random];
	guess_number = coins_in_hand + rand() % ((game.human_players + game.computer_players) - coins_in_hand + 1);
	cout << endl;
	cout << "Hand " << coins_in_hand << endl;
	cout << "Guess " << coins_in_hand << endl;
}