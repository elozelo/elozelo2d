#include <iostream>
using namespace std;

void task1(){

    double a;
    double b;
    cout << "Podaj pierwsz� liczbe: " << endl;
    cin >> a;
    cout << "Podaj drug� liczbe: " << endl;
    cin >> b;
    cout << "Twoja liczba to: " << a / b << endl;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}
