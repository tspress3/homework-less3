#include <Windows.h>
#include <iostream>
#include <time.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ----------------- Задание 1 -----------------

    cout << "----------------- Задание 1 -----------------\n";
    double rast, vremya, speed;

    cout << "Введите расстояние до аэропорта (км): ";
    cin >> rast;
    cout << "Введите время в пути (часы): ";
    cin >> vremya;

    speed = rast / vremya;

    cout << "Нужно ехать со скоростью: " << speed << " км/ч\n";

    // ----------------- Задание 2 -----------------

    Sleep(2000);
    system("cls");
    cout << "----------------- Задание 2 -----------------\n";
    int h1, m1, s1, h2, m2, s2; // часы минуты секунды
    const double cena = 2;

    cout << "Введите время начала (часы минуты секунды): ";
    cin >> h1 >> m1 >> s1;
    cout << "Введите время завершения (часы минуты секунды): ";
    cin >> h2 >> m2 >> s2;

    int start = h1 * 3600 + m1 * 60 + s1;
    int finish = h2 * 3600 + m2 * 60 + s2;

    if (finish < start) {
        finish += 24 * 3600;
    }

    double minuti = (finish - start) / 60.0;
    double stoimost = minuti * cena;

    cout << "Время поездки: " << minuti << " мин\n";
    cout << "Стоимость поездки: " << stoimost << " грн\n";

    // ----------------- Задание 3 -----------------

    Sleep(2000);
    system("cls");
    cout << "----------------- Задание 3 -----------------\n";
    double km, rashod, benz92, benz95, benz98;

    cout << "Введите расстояние (км): ";
    cin >> km;
    cout << "Введите расход бензина на 100 км (л): ";
    cin >> rashod;
    cout << "Введите стоимость 1 литра бензина А-92: ";
    cin >> benz92;
    cout << "Введите стоимость 1 литра бензина А-95: ";
    cin >> benz95;
    cout << "Введите стоимость 1 литра бензина А-98: ";
    cin >> benz98;

    double litri = km / 100 * rashod;

    cout << "\n";
    cout << "Бензин\t\tЦена за литр\tЛитров\t\tСтоимость поездки\n";
    cout << "А-92\t\t" << benz92 << "\t\t" << litri << "\t\t" << litri * benz92 << "\n";
    cout << "А-95\t\t" << benz95 << "\t\t" << litri << "\t\t" << litri * benz95 << "\n";
    cout << "А-98\t\t" << benz98 << "\t\t" << litri << "\t\t" << litri * benz98 << "\n";

    Sleep(2000);
    system("cls");

    while (true) {
        cout << "----------------- Калькулятор -----------------\n";
        double num1, num2;
        char deystvie;

        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите действие (+, -, *, /): ";
        cin >> deystvie;
        cout << "Введите второе число: ";
        cin >> num2;

        if (deystvie == '+') {
            cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
        }
        else if (deystvie == '-') {
            cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
        }
        else if (deystvie == '*') {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
        }
        else if (deystvie == '/') {
            if (num2 == 0) {
                cout << "Ошибка: на ноль делить нельзя!\n";
            }
            else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            }
        }
        else {
            cout << "Ошибка: неизвестное действие!\n";
        }

        int again;
        cout << "\nВоспользоваться калькулятором ещё раз? (1 - да, 0 - нет): ";
        cin >> again;

        if (again != 1) {
            break;
        }

        system("cls");
    }

    return 0;
}