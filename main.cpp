#include <Windows.h>
#include <iostream>
#include <time.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // text sdelal na angl tak kak github ne vosprinimaet russkiy

    // ----------------- Zadanie 1 -----------------

    cout << "----------------- Zadanie 1 -----------------\n";
    double rast, vremya, speed;

    cout << "Vvedite rastoyanie do aeroporta (km): ";
    cin >> rast;
    cout << "Vvedite vremya v puti (hours): ";
    cin >> vremya;

    speed = rast / vremya;

    cout << "Nuzhno ehat so skorostyu: " << speed << " km/h\n";

    // ----------------- Zadanie 2 -----------------

    Sleep(2000);
    system("cls");
    cout << "----------------- Zadanie 2 -----------------\n";
    int h1, m1, s1, h2, m2, s2; // chasy minuty sekundy
    const double cena = 2;

    cout << "Vvedite vremya nachala (chasy minuty sekundy): ";
    cin >> h1 >> m1 >> s1;
    cout << "Vvedite vremya zaversheniya (chasy minuty sekundy): ";
    cin >> h2 >> m2 >> s2;

    int start = h1 * 3600 + m1 * 60 + s1;
    int finish = h2 * 3600 + m2 * 60 + s2;

    if (finish < start) {
        finish += 24 * 3600;
    }

    double minuti = (finish - start) / 60.0;
    double stoimost = minuti * cena;

    cout << "Vremya poezdki: " << minuti << " min\n";
    cout << "Stoimost poezdki: " << stoimost << " grn\n";

    // ----------------- Zadanie 3 -----------------

    Sleep(2000);
    system("cls");
    cout << "----------------- Zadanie 3 -----------------\n";
    double km, rashod, benz92, benz95, benz98;

    cout << "Vvedite rastoyanie (km): ";
    cin >> km;
    cout << "Vvedite rashod benzina na 100 km (l): ";
    cin >> rashod;
    cout << "Vvedite stoimost 1 litra benzina A-92: ";
    cin >> benz92;
    cout << "Vvedite stoimost 1 litra benzina A-95: ";
    cin >> benz95;
    cout << "Vvedite stoimost 1 litra benzina A-98: ";
    cin >> benz98;

    double litri = km / 100 * rashod;

    cout << "\n";
    cout << "Benzin\t\tCena za litr\tLitrov\t\tStoimost poezdki\n";
    cout << "A-92\t\t" << benz92 << "\t\t" << litri << "\t\t" << litri * benz92 << "\n";
    cout << "A-95\t\t" << benz95 << "\t\t" << litri << "\t\t" << litri * benz95 << "\n";
    cout << "A-98\t\t" << benz98 << "\t\t" << litri << "\t\t" << litri * benz98 << "\n";

    Sleep(2000);
    system("cls");

    while (true) {
        cout << "----------------- Calculator -----------------\n";
        double num1, num2;
        char deystvie;

        cout << "Vvedite pervoe chislo: ";
        cin >> num1;
        cout << "Vvedite deystvie (+, -, *, /): ";
        cin >> deystvie;
        cout << "Vvedite vtoroe chislo: ";
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
                cout << "Oshibka: na nol delit nelzya!\n";
            }
            else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            }
        }
        else {
            cout << "Oshibka: neizvestnoe deystvie!\n";
        }

        int again;
        cout << "\nVospolzovatsya kalkulyatorom eshche raz? (1 - da, 0 - net): ";
        cin >> again;

        if (again != 1) {
            break;
        }

        system("cls");
    }

    return 0;
}