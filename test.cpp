

#include <iostream>
#include <fstream>
using namespace std;

#include "Position.h"
#include "utility.h"
#include "Ship.h"

void test_position();

int main() {
    test_position();
    test_ship();

    return 0;
}

void test_position() {
    // testing Position default constructor here
    Position start_pos;
    Position end_pos;
    cout << "Testing Position::Position() - default constructor\n";
    cout << "start_pos, expected output: (1,A) actual output: " << start_pos << endl;
    cout << "end_pos, expected output: (1,A) actual output: " << end_pos << endl;

    // testing Position setters here
    start_pos.set_row(4);
    start_pos.set_col(5);
    cout << "\nTesting Position::set_row() and Position::set_col()\n";
    cout << "start_pos, expected output: (5,F) actual output: " << start_pos << endl;
    // testing Position read
    ifstream input_file;
    input_file.open("abc.txt");
    if (input_file.good()) {

        // can use the Position::read() function directly
        start_pos.read(input_file);

        // or use the extraction operator
        input_file >> end_pos;

        cout << "\nTesting Position::read()\n";
        cout << "start_pos, expected output: (1,A) actual output: " << start_pos << endl;
        cout << "end_pos, expected output: (4,A) actual output: " << end_pos << endl;
    }
    else {
        cout << "\nError opening grid1.txt\n";
    }
    Position pos1('z', '4');
    Position pos2(10, 18);
    Position pos3('J', '9');
    Position pos4('a', '8');
    Position pos5(-3, -23);
    Position pos6('d', 'f');
    Position pos7(1, 2);
    Position pos8(22, 14);
    Position pos9('1', 'H');
    Position pos10('8', 's');
    cout << pos1.get_row();
    cout << pos1.get_col();
    cout << pos2.get_row();
    cout << pos2.get_col();
    cout << pos3.get_row();
    cout << pos3.get_col();
    cout << pos4.get_row();
    cout << pos4.get_col();
    cout << pos5.get_row();
    cout << pos5.get_col();
    cout << pos6.get_row();
    cout << pos6.get_col();
    cout << pos7.get_row();
    cout << pos7.get_col();
    cout << pos8.get_row();
    cout << pos8.get_col();
    cout << pos9.get_row();
    cout << pos9.get_col();
    cout << pos10.get_row();
    cout << pos10.get_col();

    return;
}

void test_ship(){
    // testing Position default constructor here
    Position start_pos;
    Position end_pos;
    cout << "Testing Position::Position() - default constructor\n";
    cout << "start_pos, expected output: (1,A) actual output: " << start_pos << endl;
    cout << "end_pos, expected output: (1,A) actual output: " << end_pos << endl;

    // testing Position setters here
    start_pos.set_row(4);
    start_pos.set_col(5);
    cout << "\nTesting Position::set_row() and Position::set_col()\n";
    cout << "start_pos, expected output: (5,F) actual output: " << start_pos << endl;
    // testing Position read
    ifstream input_file;
    input_file.open("abc.txt");
    if (input_file.good()) {

        // can use the Position::read() function directly
        start_pos.read(input_file);

        // or use the extraction operator
        input_file >> end_pos;

        cout << "\nTesting Position::read()\n";
        cout << "start_pos, expected output: (1,A) actual output: " << start_pos << endl;
        cout << "end_pos, expected output: (4,A) actual output: " << end_pos << endl;
    }
    else {
        cout << "\nError opening grid1.txt\n";
    }
    Position pos1('z', '4');
    Position pos2(10, 18);
    Position pos3('J', '9');
    Position pos4('a', '8');
    Position pos5(-3, -23);
    Position pos6('d', 'f');
    Position pos7(1, 2);
    Position pos8(22, 14);
    Position pos9('1', 'H');
    Position pos10('8', 's');
    cout << pos1.get_row();
    cout << pos1.get_col();
    cout << pos2.get_row();
    cout << pos2.get_col();
    cout << pos3.get_row();
    cout << pos3.get_col();
    cout << pos4.get_row();
    cout << pos4.get_col();
    cout << pos5.get_row();
    cout << pos5.get_col();
    cout << pos6.get_row();
    cout << pos6.get_col();
    cout << pos7.get_row();
    cout << pos7.get_col();
    cout << pos8.get_row();
    cout << pos8.get_col();
    cout << pos9.get_row();
    cout << pos9.get_col();
    cout << pos10.get_row();
    cout << pos10.get_col();

    return;
}