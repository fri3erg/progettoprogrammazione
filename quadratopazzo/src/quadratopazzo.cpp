//============================================================================
// Name        : quadratopazzo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
#include <ncurses.h>

using namespace std;

int main() {

	initscr();

	int height, width, start_y, start_x;

	height = 10;
	width = 20;
	start_y = 10;
	start_x = 10;

	WINDOW * win = newwin (height,width,start_y,start_x);

	refresh();

	box(win,0,0);

	wrefresh(win);

	getch();

	endwin();


}
