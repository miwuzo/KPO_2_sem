#include <iostream>

using namespace std;

typedef unsigned int area;
typedef string name;
typedef unsigned short population;
typedef string valuta;

struct country {
	name n; 
	area a;
	population b;
	valuta v;
};


bool operator > (country s1, country s2)
{
	return (s1.b > s2.b);
}


bool operator < (country s1, country s2)
{
	return (s1.a < s2.a);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	country s1 = { "first", 111, 2222,"usd"};
	country s2 = { "second", 222, 1111 ,"usd"};
	if (s1 < s2) { cout << "первая страна занимает меньшую площадь\n"; }
	else { cout << "вторая страна занимает большую позицию\n"; }
	if (s1 > s2) { cout << "население первой страны больше чем население второй\n"; }
	else { cout << "население второй страны больше или равно населению первой\n"; }
	return 0;
}