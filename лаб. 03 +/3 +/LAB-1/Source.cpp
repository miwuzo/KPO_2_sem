#include "stdafx.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 1, menu1(), menu2();
	
	int Months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	do {
		//меню
		menu1();
		char n;
		cin >> n;
		cout << "\n";
		//проверка
		while ('2' < n || n < '1') {
			cout << "Вы ввели некорректный номер.\n";
			cout << "Выберите существующий вариант выполнения программы\n";
			menu2();
			cin >> n;
			cout << "\n";
		}

		//выполнение программы

		switch (n) {

		case '1': {
			cout << "Введите дату(в формате ДДММГГГГ)\n";
			static char data[chislo];
			cin >> data;
			//прорерка 
			for (int i = 0; i < 8; i++) {

				if (data[i] > '9' || data[i] < '0') {

					cout << "Вы некорректно ввели дату!\n";
					cout << "Введите дату(в формате ДДММГГГГ)\n";
					cin >> data;
				}
			}
			int dol;
			//извлечение месяца 
			int mes = (data[2] - '0') * 10 + data[3] - '0';
			//извлечение дня 
			int den = (data[0] - '0') * 10 + data[1] - '0';
			//Доп проверка корректности даты
			
			int god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			bool cel = Checking(god);
			while (cel == 0 && mes == 2 && den > 28) {

				cout << "Вы некорректно ввели дату!\n";
				cout << "Введите дату(в формате ДДММГГГГ)\n";
				cin >> data;

				//извлечение месяца из даты
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня из даты
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			}
			while (data[0] > '3' || data[0] < '0' || mes > 12 || mes < 1 || den < 1 || den > 31) {


				cout << "Вы некорректно ввели дату!\n";
				cout << "Введите дату(в формате ДДММГГГГ)\n";
				cin >> data;
				//извлечение месяца из даты
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня из даты
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';

			}
			//извлечение года из даты
			god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';

			//Ввод даты рождения
			cout << "Введите дату рождения(в формате ДДММГГГГ)\n";
			static char birth[chislo];
			cin >> birth;
			//Проверка 
			for (int i = 0; i < 8; i++) {

				if (birth[i] > '9' || birth[i] < '0') {

					cout << "Вы некорректно ввели дату!!\n";
					cout << "Введите дату рождения(в формате ДДММГГГГ)\n";
					cin >> birth;
				}
			}
			//извлечение месяца
			int mesbirth = (birth[2] - '0') * 10 + birth[3] - '0';
			//извлечение дня
			int denbirth = (birth[0] - '0') * 10 + birth[1] - '0';
			//проверка
			
			int godbirth = (birth[4] - '0') * 1000 + (birth[5] - '0') * 100 + (birth[6] - '0') * 10 + birth[7] - '0';
			bool cell = Checking(godbirth);
			while (cel== 0 && mesbirth == 2 && denbirth > 28) {

				cout << "Вы некорректно ввели дату!!\n";
				cout << "Введите дату(в формате ДДММГГГГ)\n";
				cin >> data;
				//извлечение месяца
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//извлечение дня
				den = (data[0] - '0') * 10 + data[1] - '0';
				godbirth = (birth[4] - '0') * 1000 + (birth[5] - '0') * 100 + (birth[6] - '0') * 10 + birth[7] - '0';
			}
			while (birth[0] > '3' || birth[1] < '0' || mesbirth > 12 || mesbirth < 1 || denbirth < 1 || denbirth > 31) {

				cout << "Вы некорректно ввели дату!!\n";
				cout << "Введите дату рождения(в формате ДДММГГГГ)\n";
				cin >> birth;
				//извлечение месяца
				mesbirth = (birth[2] - '0') * 10 + birth[3] - '0';
				//извлечение дня
				denbirth = (birth[0] - '0') * 10 + birth[1] - '0';
				godbirth = (birth[4] - '0') * 1000 + (birth[5] - '0') * 100 + (birth[6] - '0') * 10 + birth[7] - '0';
			}
			//извлечение года 
			godbirth = (birth[4] - '0') * 1000 + (birth[5] - '0') * 100 + (birth[6] - '0') * 10 + birth[7] - '0';

			//Вывод информации о дате

			cout << "Ваша введённая дата: " << den << ":" << mes << ":" << god << "\n";
			cout << "Ваш день рождения: " << denbirth << ":" << mesbirth << ":" << godbirth << "\n";
			cel = 0;
			//Проверка на високосность
			/*int Checking(int x, int y);*/
			if (Checking(god) == 1) {
				cout << "Данный год является високосным \n";
			}
			else {
				cout << "Данный год не является високосным \n";
			}
			//Вычисление порядкового номера дня в году
			int quantity(int x, int y, int z);
			cout << "Введённый Вами день является " << quantity(mes, den, Checking(god)) << " в году\n";

			//Вычисление количества дней до Вашего ближайшего дня рождения

			if (quantity(mes, den, Checking(god)) < quantity(mesbirth, denbirth, Checking(god))) {

				int daycout = quantity(mes, den, Checking(god));
				int daybirths = quantity(mesbirth, denbirth, Checking(god));
				int colvoday = daybirths - daycout;
				cout << "До ближайшего Вашего дня рождения " << colvoday << " дня(ей)\n";
			}
			else if (quantity(mes, den, Checking(god)) == quantity(mesbirth, denbirth, Checking(god))) {
				cout << " С днём рождения!! \n";

			}

			else {

				int daycout = quantity(mes, den, Checking(god));
				int jatgod = god + 1;
				int daybirths = quantity(mesbirth, denbirth, Checking(jatgod));
				int daygod = 365 + Checking(god);
				int daydop = daygod - daycout;
				int colvoday = daybirths + daydop;
				cout << "До ближайшего Вашего дня рождения " << colvoday << " дня(ей)\n";
			}

			day_prog(Checking(god));
			nameMounth( mes, Months);

		}

				//Выход

		case '2': {

			cout << "Программа завершена \n";

			return 0;
		}
		}
	} while (a != 0);
	return 0;
}

//Функции

//Главное меню
int menu1() {
	using namespace std;
	cout << "выберите вариант выполнения программы: \n";
	cout << "1 - Информация о введённой Вами дате \n";
	cout << "2 - Выход из программы \n";
	cout << "\n";
	cout << "Вариант выполнения программы: ";
	return 0;
};

//Возвращение в меню
int menu2() {
	int menu1();
	using namespace std;

	cout << "Вы ввели некорректный вариант выполнения\n";
	menu1();
	return 0;
};


