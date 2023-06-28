#include "stdafx.h"

int nameMounth(int mes, int Months[12]) {

	string namemounth1[12] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };
	cout << "------------------ Название месяца: " << namemounth1[mes - 1] << endl;
	return 0;
}