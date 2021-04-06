/**
 * Copyright 2019 University of Michigan EECS183
 *
 * Ship.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * <#Name#>
 * <#Uniqname#>
 *
 * Project 4: Battleship
 *
 * <#description#>
 */

#include <cmath>

#include "Ship.h"


Ship::Ship() {
    start.set_row(0);
    start.set_col(0);
    end.set_row(0);
    end.set_col(0);
    size = 0;
    num_hits = 0;
}

Ship::Ship(Position start_in, Position end_in) {
    if(has_position(start_in) && has_position(end_in))
    {
              start_in = start;
              end_in = end;
              num_hits = 0;
              size = get_size();
    }
}

Position Ship::get_start() {
    return start;
}

Position Ship::get_end() {
    // TODO: write implementation here.
    return end;
}

int Ship::get_size() {
    Position size1 = get_start();
    Position size2 = get_end();
    int a = (size1.get_row()-size2.get_row());
    int b = ((int)size1.get_col())-((int)size2.get_col());
    int Size = a + b;
    return Size;
}

bool Ship::is_horizontal() {
    int row1 = start.get_row();
    int col1 = start.get_col();
    int row2 = end.get_row();
    int col2 = end.get_col();
    if(row1!=row2 && col1!=col2){
        return false;
    }
    else{
        return true;
    }
}

bool Ship::has_position(Position pos) {
    if (is_horizontal()) {
        int row = pos.get_row();
        int col = pos.get_col();
        if (row > 0 && row <= MAX_GRID_SIZE && col >= 65 && col <= 74) {
            return true;
        } else {
            return false;
        }
    }
    else {
        return false;
    }
}

void Ship::hit() {
    int Size = get_size();
    if(num_hits<Size){
        num_hits++;
    }
}

bool Ship::has_sunk() {
    if(num_hits==size)
    {
        return true;
    }
    else {
        return false;
    }
}
