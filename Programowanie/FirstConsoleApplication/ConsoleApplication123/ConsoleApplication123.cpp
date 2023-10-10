#include <iostream>
using namespace std;

/*
6. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
8. Program sprawdzj¹cy czy podana liczba jest z przedia³u <1;15)
9. Program sprawdzaj¹cy czy osoba jest pe³noletnia.
10. Program, który sprawdzi czy z podanych d³ugoœci boków mo¿na zrobiæ trójk¹t.
*/


//Napisz funkcjê, która podzieli dwie liczby.
void task0()
{
    int firstNumber, secondNumber;

    cout << "Podaj pierwsz¹ liczbê:\n";
    cin >> firstNumber;
    cout << "Podaj drug¹ liczbê (byle nie zero):\n";
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

//Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
void task1()
{
    int Number;
    cout << "Podaj liczbê:\n";
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
    cout << "Podaj liczbê:\n";
    cin >> Number;
    double endNumber = Number & 4;
    if (endNumber == 0) {

        cout << "Rok jest przestêpny";
    }
    else {
        cout << "Rok jest nieprzestêpny";
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

        cout << "Dopuszczaj¹cy";
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

        cout << "Celuj¹cy";
    }
}
void task5()
{
    char haslo = "abc123";
    cout << "Podaj has³o:\n";
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