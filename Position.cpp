#include "Position.h"
#include "utility.h"


Position::Position() {
    row = 0;
    col = 0;
}

Position::Position(int row_in, int col_in) {
    row = check_range(row_in);
    col = check_range(col_in);
}

Position::Position(char row_in, char col_in) {
    row = row_in - '1';
    col = toupper(col_in) - 'A';
    check_range(row);
    check_range(col);
}

int Position::get_row() {
    return row;
}

void Position::set_row(int row_in) {
    row = check_range(row_in);
    return;
}

int Position::get_col() {
    return col;
}

void Position::set_col(int col_in) {
    col = check_range(col_in);
    return;
}

void Position::read(istream& is) {
    char trash;
    char column;
    is >> row >> column;
    if (!is.fail()) {
        column = toupper(column);
        col = column - 65;
        row = row - 1;
        row = check_range(row);
        col = check_range(col);
        return;
    }
    is.clear();

    is >> trash >> row >> trash >> column >> trash;
    column = toupper(column);
    col = column - 65;
    row = row - 1;
    row = check_range(row);
    col = check_range(col);
    return;
}

void Position::write(ostream& os) {
    char column;
    row = row + 1;
    column = col + 65;
    os << "(" << row << "," << column << ")" << endl;
    return;
}

int Position::check_range(int val) {
    if (val >= 0 && val < MAX_GRID_SIZE) {
        return val;
    }
    else if (val < 0) {
        return 0;
    }
    else {
        return (MAX_GRID_SIZE - 1);
    }
}


// Your code goes above this line.
// Don't change the implementations below!

istream &operator>>(istream &is,  Position &pos) {
    pos.read(is);
    return is;
}

ostream &operator<<(ostream &os, Position pos) {
    pos.write(os);
    return os;
}

