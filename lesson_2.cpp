#include <iostream>

int main() {
//task 1
    int x = 5;
    float y = 8.9;
    char a = 'b';

//task 2
    enum game {empty, zero, cross};


//task 3
     int field[3][3] = {empty,empty,empty, empty,empty,empty, empty,empty,empty};

//task 4
    struct field_for_game {
        int field_size = 9;
        int number_empty_cells = 9;
        int number_x = 0;
        int number_0 = 0;
    } game;

//    task 5

    struct binary
    {
        union
        {
            char x;
            int f;
            float g;
        } u;
        int isInt : 1;
        int isFloat : 1;
        int isChar : 1;
    };

    struct binary numb;

    numb.u.f = 5;
    numb.isInt = 1;
    numb.isFloat = 0;
    numb.isChar = 0;


    std::cout << numb.u.f  << std::endl;
    return 0;
}



