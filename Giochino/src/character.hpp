/*
 * character.hpp
 *
 *  Created on: 27 mar 2023
 *      Author: francesco
 */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_


class Character {
public:
    Character(int x, int y);
    void moveLeft();
    void moveRight();
    void jump();
    void fall();
    void display();
    int x_pos, y_pos;
    int x_pos_prev_x, y_pos_prev_y;
};


#endif /* CHARACTER_HPP_ */
