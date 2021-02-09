#include <iostream>

int main() {
//    task 1
//    int a = 5;
//    int b = 8;
//    int c = 20;
//    int d = 12;
//    float f;
//    f = a * (b + ((float)c / d));


// task 2
//    int number = 100;
//    int output =  ((number < 21) ? number - 21 : (number - 21) * 2);

//task 3
//    extern int a;
//    extern int b;
//    extern int c;
//    extern int d;
//    float f;
//    f = a * (b + ((float)c / d));



//task 4
    int massiv[3][3][3] = {
            {{1,5,6}, {4,7,8}, {5,7, 11}},
            {{5,7, 88}, {4, 68,98}, {678, 656, 34}},
            {{6, 7, 8}, {45, 7, 8}, {5, 6, 8}}

    };
    int center = * (* (* (massiv + 1 ) + 1) + 1);

    std::cout << center << std::endl;
    return 0;
}



/*
* Описать трёхмерный целочисленный массив, размером 3х3х3, указатель на значения внутри массива и при помощи операции
 * разыменования вывести на экран значение центральной ячейки получившегося куба [1][1][1]*/
