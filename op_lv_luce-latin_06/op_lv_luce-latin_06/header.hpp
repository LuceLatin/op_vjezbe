#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <fstream>
#include <time.h>

using namespace std;


class Model {
public:
    string movie;
    string guessmovie;
    string hangman_1;
    vector<char> used_letters;
    int lives = 7;
};

class Controller {
public:
    void random_movie(Model& model);
    void lives(Model& model, bool mistake);
    void letter(Model& model);
    bool used_or_not(Model& model, char s);
    void movie_strings(Model& model);
    void update_drawing(Model& model);
    bool game_over(Model& model);
};

class View {
public:
    void drawing(Model model);
    void progress(Model model);
    void used_letters(Model model);
    void display_correct(Model model);
};
