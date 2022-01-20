#include "board.hpp"

void front()
{   
    cout << endl;
    string name ="\t\t\t\n"
        "\t\t\t     _               _     _     _                _       _            \n"
        "\t\t\t    | |             | |   | |   | |              | |     (_)             \n"
        "\t\t\t    | |__     __ _  | |_  | |_  | |   ___   ___  | |__    _   _ __        \n"
        "\t\t\t    | '_  \\  / _` | | __| | __| | |  / _ \\ / __| | '_ \\  | | | '_ \\      \n"
        "\t\t\t    | |_) | | (_| | | |_  | |_  | | |  __/ \\__  \ | | | | | | | |_) |      \n"
        "\t\t\t    |_.__/   \\__,_|  \\__|  \\__| |_|  \\___| |___/ |_| |_| |_| |.__ /          \n"
        "\t\t\t                                                             | |          \n"
        "\t\t\t                                                             |_|          \n";

    cout << endl << endl << endl << endl << endl << endl << endl;
    string boat = "\t\t\t\t\n"
        "\t\t\t\t                 ____\n"
        "\t\t\t\t                   ---| \n"
        "\t\t\t\t      \\/            /|     \\/ \n"
        "\t\t\t\t                    / |\\\n"
        "\t\t\t\t                   /  | \\        \\ / \n"
        "\t\t\t\t                  /   || \\\n"
        "\t\t\t\t                 /    | | \\\n"
        "\t\t\t\t                /     | |  \\\n"
        "\t\t\t\t               /      | |   \\\n"
        "\t\t\t\t              /       ||     \\\n"
        "\t\t\t\t             /        /       \\\n"
        "\t\t\t\t          / ________ / \\\n"
        "\t\t\t\t           ________ / __________-- / \n"
        "\t\t\t\t       ~~~ \\___________________ / \n"
        "\t\t\t\t          ~~~~~~~~~            ~~~~~~~~~\n"
        "\t\t\t\t     ~~~~~~~~~~~~~   ~~~~~~~~~\n"
        "\t\t\t\t                                      ~~~~~~~~~\n";

    string rules;
    rules = "Five ships are distributed randomly on the field. Ships have sizes of one, two, three, four or five squares.\n"
        "Player has to guess all coordinates of each ship to sink it. If player picks a square with a ship in it, it is hit (+), \n"
        "and if they pick an empty square (*), they missed and lose one life.\n" 
        "The game lasts until player sinks all the boats or loses all lives.\n";

    system("Color 0B");
    cout << name << endl;
    cout << boat << endl;
    char c = _getch();
    system("CLS");

    system("Color 07");
    cout << "Rules:" << endl;
    cout << rules << endl;
    cout << "Press enter to start the game." << endl;
    char h = _getch();
    system("CLS");
}