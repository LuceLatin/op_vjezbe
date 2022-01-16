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
/*1. Napravite igru Japane�a za vi�e igra�a. U igri svaki igra� ima tri kovanice,
od 1, 2 i 5 kuna. U svakoj ruci odabire od nula do tri kovanice i poga�a zbroj
odabranih kovanica u rukama svih igra�a. Igra�i koji pogode zbroj dobiju po
jedan bod. Igra� mo�e biti �ovjek ili kompjuter. Igra se igra dok jedan od
igra�a ne postigne unaprijed zadani broj bodova.
Klase koje trebate definirati:
� Game, zadu�ena za logiku igre
� Player, predstavlja igra�a. Iz te klase izvedite dvije klase: HumanPlayer
i ComputerPlayer.*/


int main()
{
	//zadatak 1
	/*Napravite igru Japane�a za vi�e igra�a. U igri svaki igra� ima tri kovanice, od 1, 2 i 5 kuna.
	U svakoj ruci odabire od nula do tri kovanice i poga�a zbroj odabranih kovanica u rukama svih igra�a.
	Igra�i koji pogode zbroj dobiju po jedan bod.
	Igra� mo�e biti �ovjek ili kompjuter. Igra se igra dok jedan od igra�a ne postigne unaprijed zadani broj bodova.
	Klase koje trebate definirati:
	� Game, zadu�ena za logiku igre
	� Player, predstavlja igra�a. Iz te klase izvedite dvije klase: HumanPlayer i ComputerPlayer.*/


	
	Game Japaneza;
	Japaneza.human_players = 3;
	Japaneza.computer_players = 0;
	const int n = 0;
	const int m = 3;

	HumanPlayer human_player[m];
	ComputerPlayer computer[1];
	while ((Japaneza.gameover(human_player) == false) && (Japaneza.gameover(computer) == false)){
		for (int i = 0; i < m; i++) {
			cout << "Player " << i << endl;
			human_player[i].coins();
			human_player[i].guess(Japaneza);
			Japaneza.calc(human_player[i]);
		}

		for (int i = 0; i < n; i++) {
			computer[i].set_random(Japaneza);
			Japaneza.calc(computer[i]);
		}

		cout << "Total sum was: " << Japaneza.total << endl;
		for (int i = 0; i < m; i++) {
			Japaneza.winner(human_player[i]);
			cout << "Player " << i << " score: " << human_player[i].total_score << endl;
		}
		Japaneza.total = 0;
		cout << endl;

		for (int i = 0; i < n; i++ ) {
			Japaneza.winner(computer[i]);
			cout << "Player " << i << " score: " << computer[i].total_score << endl;
		}

	}
	


	//zadatak 2
	/* Definirajte interface Zivotinja sa metodama koje vra�aju broj nogu te vrstu (string).
	Izvedite klase �ivotinja : Kukac, Pauk, Ptica, te iz njih neke klase za konkretne �ivotinje.
	Napi�ite klasu Brojac koja prima �ivotinje(ispisuje vrstu svake dodane) i ra�una ukupan broj nogu svih �ivotinja.
	U glavnom programu napravite nekoliko �ivotinja, po�aljite ih broja�u i ispi�ite ukupan broj nogu.
	- primjer ispisa :
	dodan: tarantula
	dodan : zohar
	dodan : vrabac
	ukupno nogu : 16 */

	Tarantula tarantula;
	Cockroach cockroach;
	Sparrow sparrow;
	Counter counter;
	counter.get_animal(tarantula);
	counter.get_animal(cockroach);
	counter.get_animal(sparrow);
	counter.print_total_legs();

}


