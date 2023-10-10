#include <iostream>
using namespace std;

void task1(){

    double a;
    double b;
    cout << "Podaj pierwsz¹ liczbe: " << endl;
    cin >> a;
    cout << "Podaj drug¹ liczbe: " << endl;
    cin >> b;
    cout << "Twoja liczba to: " << a / b << endl;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}
