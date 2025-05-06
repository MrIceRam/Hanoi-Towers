#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>

const int ZERO = 0;

void gotoxy(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void PrintMap(int x) {
    for (int i = 0; i < x;i++) {
        gotoxy(5, i);
        std::cout << i;
    }
    for (int i = 0; i < x; i++) {
        gotoxy(10, i);
        std::cout << ZERO;
    }
    for (int i = 0; i < x; i++) {
        gotoxy(15, i);
        std::cout << ZERO;
    }

};

void Run(int x) {
    while (true) {
        PrintMap(x);

    }
}
int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский в Сpp
    int x;
    std::cout << "Колличество плиток ";
    std::cin >>  x;
    system("mode con cols=60 lines=30");
    Run(x);
	//_getch();
    return 0;
}
