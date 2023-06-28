#include "stdafx.h"

//‘ункци€ вычисл€юща€ пор€дковый номер введенного дн€
int quantity(int x, int y, int z) {
	int Mounthes[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sumday = 0;
	if (z == 1) {
		Mounthes[1] = 29;
	}
	for (int i = 0; i < x - 1; i++) {
		sumday = sumday + Mounthes[i];
	}
	sumday = sumday + y;

	return sumday;
}