#include <ncurses.h>
#include "character.hpp"
#include <unistd.h>
const int dim_colonna = 70;
const int dim_riga = 25;

Character::Character(int x, int y) {
    x_pos = x;
    y_pos = y;
}

void Character::moveLeft() {
    if (x_pos > 2) { // controlla che il personaggio non vada fuori dalla cornice
        x_pos--;
    }
}

void Character::moveRight() {
    if (x_pos < dim_colonna - 2) { // controlla che il personaggio non vada fuori dalla cornice
        x_pos++;
    }
}

void Character::jump() {
    int jump_height = 3;
    int gravity = 2;
    int jump_duration = 15;
    int fall_duration = 5;

    int initial_y_pos = y_pos;

    for (int i = 0; i < jump_duration; i++) {
        if (y_pos > 2) {
            y_pos -= jump_height / jump_duration * i;
            usleep(10000); // Pausa per rallentare l'animazione del salto
        }
    }

    for (int i = 0; i < fall_duration; i++) {
        y_pos += gravity / fall_duration * i;
        usleep(10000); // Pausa per rallentare l'animazione del ritorno a terra
    }

    // Rimuove la scia del salto
    for (int i = initial_y_pos; i > y_pos; i--) {
        mvaddch(i, x_pos, ' ');
    }
}



void Character::fall() {
    if (y_pos < dim_riga - 2) { // controlla che il personaggio non vada fuori dalla cornice
        y_pos++;
    }
}

void Character::display() {
    mvaddch(y_pos, x_pos, 'P');
    mvaddch(y_pos, x_pos - 1, ' '); // cancella il carattere precedente
    mvaddch(y_pos , x_pos + 1, ' '); // cancella il carattere precedente
    mvaddch(y_pos + 2 , x_pos , ' '); // cancella il carattere precedente

}
