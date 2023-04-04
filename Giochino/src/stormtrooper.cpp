#include <ncurses.h>
#include "stormtrooper.hpp"
#include <unistd.h>
const int dim_colonna = 70;
const int dim_riga = 25;

Stormtrooper::Stormtrooper(int x, int y){
		x_pos = x;
	    y_pos = y;
}
void Stormtrooper::display() {
    mvaddch(y_pos, x_pos, 'A');
    mvaddch(y_pos, x_pos - 1, ' '); // cancella il carattere precedente
    mvaddch(y_pos , x_pos + 1, ' '); // cancella il carattere precedente
    mvaddch(y_pos + 2 , x_pos , ' '); // cancella il carattere precedente

}

