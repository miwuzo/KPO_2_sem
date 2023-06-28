#include <iostream>
#include <locale>
#include "call.h"

using namespace std;
using namespace Call;

int main() {

	setlocale(LC_ALL, "ru");

	int a = 1,
		b = 3,
		c = 5,
		d = 7;

	int r1_cdecl = cdeml(a, b, c);
	int r2 = cstd(a, b, c);
	int r3 = cfst(a, b, c, d);

	cout << " сумма = " << cdeml(a, b, c) << endl;
	cout << "сумма = " << cstd(a, b, c) << endl;
	cout << "сумма всех = " << cfst(a, b, c, d) << endl;

	return 0;
}