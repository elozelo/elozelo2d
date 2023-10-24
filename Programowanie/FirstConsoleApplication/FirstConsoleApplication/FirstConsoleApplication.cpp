#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;


/*
Podstawy programowania:

1.
2. Program obliczaj¹cy pole prostok¹ta.
3. Program obliczaj¹cy objêtoœæ sto¿ka.
4. Program obliczaj¹cy pole ko³a.
5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
7. Program obliczaj¹cy objêtoœæ kuli o promieniu r
8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
    
int main()
{
    double a;
    double b;
    cout << "Type the first number: " << endl;
    cin >> a;
    cout << "Type the second number: " << endl;
    cin >> b;
    cout << a + b;
}
//Program obliczający pole prostokąta:
void task2()
{
    double a;
    double b;

        std::cout << "Podaj pierwszy bok: ";
        std::cin >> a;
        std::cout << "Podaj drugi bok: ";
        std::cin >> b;

    double poleprostokata = (a * b);

    std::cout << "Pole prostokąta wynosi: " << poleprostokata << "\n";

}

//Program obliczający objętość stożka:
void task3()
{

    double r;
    double H;
    double V;

        float pi = 3.141;

         std::cout << "Podaj promień: \n";
         std::cin >> r;
         std::cout << "Podaj wysokość: \n";
         std::cin >> H;

        V = (pi * r * r) * (H / 3);

        std::cout << "Objetosc wynosi: " << V;

}

//Program obliczający pole koła:
void task4()
{

    double r;
    double polekola;

        float pi = 3.141;

        std::cout << "Podaj promień koła: \n";
        std::cin >> r;
        polekola = (pi * r * r);

        std::cout << "Pole kola wynosi: "<< polekola <<"\n";

}

//Program obliczający wartość wyrażenia a^2 + b^2:
void task5()
{

    double a;
    double b;
    double liczbakoncowa;

        std::cout << "Podaj a: ";
        std::cin >> a;
        std::cout << "Podaj b: ";
        std::cin >> b;

        liczbakoncowa = (a * a) + (b * b);
        cout << liczbakoncowa;

}

//Program obliczający pole trójkąta o podstawie b i wysokości h:
void task6()
{

    double a;
    double h;
    double poletrojkata;


        std::cout << "Podaj długość boku trójkąta: ";
        std::cin >> a;
        std::cout << "Podaj wysokość trójkąta: ";
        std::cin >> h;

        poletrojkata = (a * h) /2;

            std::cout << "Pole trojkąta wynosi: " << poletrojkata<< "\a";
}

//Program obliczający objętość kuli o promieniu r:
void task7()
{

    double r; 
    double objkuli;

    float pi = 3.141;

        std::cout << "Podaj r kuli: ";
        std::cin >> r;

        objkuli = (4 / 3) * (pi * r);

        std::cout << "Objetosc kuli wynosi: " << objkuli << "\n";

}

//Program obliczający pole trapezu o podstawach a i b oraz wysokości h:
void task8()
{

    double a;
    double b;
    double h;
   double ptrapezu;

        std::cout << "Podaj a: ";
        std::cin >> a;
        std::cout << "Podaj b: ";
        std::cin >> b;
        std::cout << "Podaj wysokość: ";
        std::cin >> h;

        ptrapezu = (a + b) * h/2;

            std::cout << "Pole trapezu wynosi: " << ptrapezu << "\n";

}

//Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3:
void task9()
{

    double liczba1, liczba2, liczba3, w1, w2, w3;

        std::cout << "Podaj pierwszą liczbe: ";
        std::cin >> liczba1;

        std::cout << "Podaj wage pierwszej liczby: ";
        std::cin >> w1;

        std::cout << "Podaj drugą liczbe: ";
        std::cin >> liczba2;

        std::cout << "Podaj wage drugiej liczby: ";
        std::cin >> w2;

        std::cout << "Podaj trzecią liczbe: ";
        std::cin >> liczba3;

        std::cout << "Podaj wage trzeciej liczby: ";
        std::cin >> w3;

        double srednia = (liczba1 * w1 + liczba2 * w2 + liczba3 * w3) / (w1 + w2 + w3);

        std::cout << "Średnia ważona liczb wynosi: " << srednia <<"\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file 
void test() {
cout << "Hello World!\n";
cout << -59.5 << 'x' << "asdfasdfhasdfasdfhvasdfjh" << true << false << "elozelo\n";

int number;
number = 5;

int secondNumber;
secondNumber = number + 2;
int x;
x = 3 << 1; //3 / (2^1) = 6 011 110

/*
Piorytety operatorów:

1.(,)
2.*,/,%
3.+,-
4.=

*/
cout << "Hello World!\n";
cout << -59.5 << 'x' << "ghfghjfghj" << true << false << '\n';

//typ nazwa;
int number;
number = 5;

int secondNumber;
secondNumber = number + 2;
/*
Priorytet operatorów:

(, )
+, - (unarne)
*, /, %
+, -
=

*/
std::cout << "Komuinikat \n";
std::cin >> secondNumber >> number;
}
