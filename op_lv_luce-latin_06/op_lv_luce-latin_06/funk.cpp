#include "header.hpp"


void View::drawing(Model model) {
    cout << model.hangman_1 << endl;
}

void View::progress(Model model) {
    cout << "Progress: " << model.guessmovie << endl;
}

void View::display_correct(Model model) {
    cout << "Movie name: " << model.movie << endl;
}

void View::used_letters(Model model) {
    cout << "Used letters: ";
    for (int i = 0; i < model.used_letters.size(); i++) {
        cout << model.used_letters[i] << " ";
    }
    cout << endl;
}
