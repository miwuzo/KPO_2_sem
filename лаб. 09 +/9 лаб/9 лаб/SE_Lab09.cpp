#include "varparm.h"
#include <iostream>
using namespace std;
using namespace Varparm;

void main() {
    setlocale(LC_ALL, "RU");

    //Вычислить произведение значений всех параметров, начиная со второго.
    int iv1 = ivarparm(0);
    int iv2 = ivarparm(1, 7);
    int iv3 = ivarparm(2, 4, 5);
    int iv4 = ivarparm(6, 9, 1, 4, 11, 2, 8);
    cout << "Демонстрация работы функции ivarparm: " << endl;
    cout << "iv1 = " << iv1 << endl;
    cout << "iv2 = " << iv2 << endl;
    cout << "iv3 = " << iv3 << endl;
    cout << "iv4 = " << iv4 << endl << endl;

    //Найти максимальное значение параметров, переданных в функцию, начиная со второго.
    int sv1 = svarparm(0);
    int sv2 = svarparm(1, 5);
    int sv3 = svarparm(2, 2, 5);
    int sv4 = svarparm(6, 5, 3, 4, 1, 2, 7);
    cout << "Демонстрация работы функции svarparm: " << endl;
    cout << "sv1 = " << sv1 << endl;
    cout << "sv2 = " << sv2 << endl;
    cout << "sv3 = " << sv3 << endl;
    cout << "sv4 = " << sv4 << endl << endl;

    //Вычислить сумму значений всех параметров, начиная с первого по предпоследний.
    double fv1 = fvarparm(FLT_MAX);
    double fv2 = fvarparm(1.45, FLT_MAX);
    double fv3 = fvarparm(2.93, 16.94, FLT_MAX);
    double fv4 = fvarparm(6.77, 46.55, 101.15, 1.6, 8.24, 15.0, FLT_MAX);
    cout << "Демонстрация работы функции fvarparm: " << endl;
    cout << "fv1 = " << fv1 << endl;
    cout << "fv2 = " << fv2 << endl;
    cout << "fv3 = " << fv3 << endl;
    cout << "fv4 = " << fv4 << endl << endl;

    //Вычислить сумму значений всех параметров, начиная с первого по предпоследний.
    double d1 = dvarparm(DBL_MAX);
    double d2 = dvarparm(1.45, DBL_MAX);
    double d3 = dvarparm(2.93, 16.94, DBL_MAX);
    double d4 = dvarparm(6.77, 46.55, 101.15, 1.6, 8.24, 15.0, DBL_MAX);
    cout << "Демонстрация работы функции dvarparm: " << endl;
    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << "d3 = " << d3 << endl;
    cout << "d4 = " << d4 << endl << endl;
}