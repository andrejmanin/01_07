#ifndef REC_H
#define REC_H

#include <iostream>
#include <windows.h>

struct MyRectangle
{
private:
    double width;
    double height;

public:
    MyRectangle(double width, double height) {
        this->width = width;
        this->height = height;
    }

    double get_width() {
        return this->width;
    }

    double get_height() {
        return this->height;
    }

    void set_width(double width) {
        this->width = width;
    }

    void set_height(double height) {
        this->height = height;
    }

    void show_info() {
        std::cout << "Width: " << get_width() << std::endl;
        std::cout << "Height: " << get_height() << std::endl;
    }

    void SetCursorPosition(char symbol, int count) {
        if (count == 0) {
            show_info();
            return;
        }
        else {
            COORD coord = { 0, 0 };
            switch (symbol) {
            case 'd':
                coord.Y += count;
                for (int i = 0; i < this->height; i++) {
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    for (int j = 0; j < this->width; j++) {
                        std::cout << "* ";
                    }
                    coord.Y++;
                    std::cout << std::endl;
                }
                break;
            case 'r':
                coord.X += count;
                for (int i = 0; i < this->height; i++) {
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                    for (int j = 0; j < this->width; j++) {
                        std::cout << "* ";
                    }
                    coord.Y++;
                    std::cout << std::endl;
                }
                break;
            default:
                break;
            }

        }
    }
};

#endif // !REC_H