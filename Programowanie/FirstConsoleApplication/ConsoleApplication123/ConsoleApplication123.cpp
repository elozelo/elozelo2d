#include <iostream>
using namespace std;

/*
6. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
7. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury (np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza, "ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)
8. Program sprawdzj�cy czy podana liczba jest z przedia�u <1;15)
9. Program sprawdzaj�cy czy osoba jest pe�noletnia.
10. Program, kt�ry sprawdzi czy z podanych d�ugo�ci bok�w mo�na zrobi� tr�jk�t.
*/


//Napisz funkcj�, kt�ra podzieli dwie liczby.
void task0()
{
    int firstNumber, secondNumber;

    cout << "Podaj pierwsz� liczb�:\n";
    cin >> firstNumber;
    cout << "Podaj drug� liczb� (byle nie zero):\n";
    cin >> secondNumber;

    if (secondNumber != 0)
    {
        double quotient = firstNumber / secondNumber;
        cout << "Wynik dzielenia: " << quotient << "\n";
    }
    else
    {
        cout << "Dzielenie przez zero!!!\n";
    }
}

//Program sprawdzaj�cy czy podana liczba jest parzysta czy nieparzysta
void task1()
{
    int Number;
    cout << "Podaj liczb�:\n";
    cin >> Number;
    double endNumber = Number & 2;
    if (endNumber == 0) {

        cout << "Liczba jest parzysta";
    }
    else {
        cout << "Liczba jest nieparzysta";
    }

}
void task2()
{
    int Number;
    cout << "Podaj liczb�:\n";
    cin >> Number;
    double endNumber = Number & 4;
    if (endNumber == 0) {

        cout << "Rok jest przest�pny";
    }
    else {
        cout << "Rok jest nieprzest�pny";
    }

}
void task4()
{
    int Number;
    cout << "Podaj ocene:\n";
    cin >> Number;
    if (Number == 1) {

        cout << "Niedostateczny";
    }
    if (Number == 2) {

        cout << "Dopuszczaj�cy";
    }
    if (Number == 3) {

        cout << "Dostateczny";
    }
    if (Number == 4) {

        cout << "Dobry";
    }
    if (Number == 5) {

        cout << "Bardzo dobry";
    }
    if (Number == 6) {

        cout << "Celuj�cy";
    }
}
void task5()
{
    char haslo = "abc123";
    cout << "Podaj has�o:\n";
    char input;
    cin >> input;
   
    if (input = haslo) {

        cout << "Haslo jest poprawne";
    }
    else {
        cout << "Haslo nie jest poprawne";
    }
}
int main()
{
    task5();
}