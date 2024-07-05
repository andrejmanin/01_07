#ifndef DOT_H
#define DOT_H

#include <iostream>
#include <windows.h>
#include <cmath>

struct Dot
{
private:
    COORD coords;

public:
    Dot(int x, int y) {
        coords.X = x;
        coords.Y = y;
    }

    COORD get_coords() {
        return this->coords;
    }

    void show() {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coords);
        std::cout << '*' << std::endl;
    }
};

void dist(Dot* dot_1, Dot* dot_2) {
    if (dot_1->get_coords().X == dot_2->get_coords().X) {
        std::cout << "Dist from first dot to seccond: " << (dot_1->get_coords().Y > dot_2->get_coords().Y ? dot_1->get_coords().Y - dot_2->get_coords().Y : dot_2->get_coords().Y - dot_1->get_coords().Y) << std::endl;
    }
    else if (dot_1->get_coords().Y == dot_2->get_coords().Y) {
        std::cout << "Dist from first dot to seccond: " << (dot_1->get_coords().X > dot_2->get_coords().X ? dot_1->get_coords().X - dot_2->get_coords().X : dot_2->get_coords().X - dot_1->get_coords().X) << std::endl;
    }
    else {
        std::cout << "Dist from first dot to seccond: " << sqrt(pow(dot_2->get_coords().X - dot_1->get_coords().X, 2) + pow(dot_2->get_coords().Y - dot_1->get_coords().Y, 2)) << std::endl;
    }
}

#endif // !DOT_H
