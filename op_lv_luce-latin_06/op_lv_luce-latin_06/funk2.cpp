#include "header.hpp"

void Controller::random_movie(Model& model) {
    srand(time(NULL));
    fstream fd;
    vector<string> movies;
    fd.open("movie.txt", ios::in);
    if (fd.is_open()) {
        string tp;
        while (getline(fd, tp)) {
            movies.push_back(tp);
        }
        fd.close();
    }
    model.movie = movies[rand() % movies.size()];
    for (int i = 0; i < model.movie.size(); i++) {
        if (isspace(model.movie[i])) {
            model.guessmovie.push_back(' ');
        }
        else {
            model.guessmovie.push_back('_');
        }
    }
}

void Controller::lives(Model& model, bool mistake) {
    if (mistake)
    {
        model.lives--;
    }
}

void Controller::movie_strings(Model& model) {
    char letter = model.used_letters.back();
    bool mistake = true;
    for (int i = 0; i < model.movie.size(); i++) {
        if (model.movie[i] == letter) {
            model.guessmovie[i] = letter;
            mistake = false;
        }
    }
    lives(model, mistake);
}

bool Controller::used_or_not(Model& model, char s) {
    for (int i = 0; i < model.used_letters.size(); i++) {
        if (model.used_letters[i] == s) {
            return true;
        }
    }
    return false;
}

void Controller::letter(Model& model) {
    char s;
    do {
        cout << "Enter one non-used letter: " << endl;
        cin >> s;
    } while ((!isalpha(s)) || (used_or_not(model, s)));
    model.used_letters.push_back(s);
}

void Controller::update_drawing(Model& model) {
    int lives = model.lives;
    string leg_l, leg_r, torso_d, hand_r, hand_l, torso_up, head;

    leg_r = (lives - 1) >= 0 ? " " : "\\";
    leg_l = (lives - 2) >= 0 ? " " : "/";
    torso_d = (lives - 3) >= 0 ? " " : "|";
    hand_r = (lives - 4) >= 0 ? " " : "\\";
    hand_l = (lives - 5) >= 0 ? " " : "/";
    torso_up = (lives - 6) >= 0 ? " " : "|";
    head = (lives - 7) >= 0 ? " " : "o";


    string pic = "    ________       \n"
        "    | /  |         \n"
        "    |/   " + head + "\n"
        "    |   " + hand_l + torso_up + hand_r + "\n"
        "    |    " + torso_d + "\n"
        "    |   " + leg_l + " " + leg_r + "\n"
        "    |              \n"
        " ___|___           \n";

    model.hangman_1 = pic;
}

bool Controller::game_over(Model& model) {

    if (!model.lives) {
        cout << "You lost! Try again." << endl;
        return false;
    }
    for (int i = 0; i < model.movie.size(); i++) {
        if (model.movie[i] != model.guessmovie[i]) {
            return true;
        }
    }
    cout << "You won!" << endl;
    return false;
}