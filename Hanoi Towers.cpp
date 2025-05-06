#include <iostream>
#include <windows.h>
#include <conio.h>
#include <list>

const int ZERO = 0;
std::list<int> stik1;
std::list<int> stik2;
std::list<int> stik3;

void gotoxy(int x, int y) {
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}



void CreateStiks(int x) {

    for (int i = 1; i <= x; i++) {
        stik1.push_back(i);
    }
    for (int i = 0; i < x; i++) {
        stik2.push_back(0);
    }
    for (int i = 0; i < x; i++) {
        stik3.push_back(0);
    }
}

void PrintMap(int x) {
    for (int i = 0; i < x; i++) {
        gotoxy(5, i);
        std::cout << *next(stik1.begin(), i);

    }
    for (int i = 0; i < x; i++) {
        gotoxy(10, i);
        std::cout << *next(stik2.begin(), i);
    }
    for (int i = 0; i < x; i++) {
        gotoxy(15, i);
        std::cout << *next(stik3.begin(), i);
    }

};
void Run(int x) {
    CreateStiks(x);

    while (true) {
        system("cls");
        PrintMap(x);
        Sleep(200);
    }
}
int main()
{
    setlocale(LC_ALL, "Russian"); //Включает Русский в Сpp
    int x;
    std::cout << "Колличество плиток ";
    std::cin >> x;
    system("mode con cols=25 lines=30");
    Run(x);
    _getch();
    return 0;
}
