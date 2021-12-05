#include "header.hpp"

int main() {
    Model model;
    View view;
    Controller control;

    control.random_movie(model);

    while (control.game_over(model)) {

        control.update_drawing(model);
        view.drawing(model);
        view.progress(model);
        view.used_letters(model);
        control.letter(model);
        control.movie_strings(model);
    }

    control.update_drawing(model);
    view.drawing(model);
    view.used_letters(model);
    view.progress(model);
    view.display_correct(model);
}