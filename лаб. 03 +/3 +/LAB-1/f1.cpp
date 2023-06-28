#include "stdafx.h"

//Функция проверки на високосность

bool Checking(int x) {
	return ((x % 4 == 0) && ((x % 100 != 0) || (x % 400 == 0)));
}