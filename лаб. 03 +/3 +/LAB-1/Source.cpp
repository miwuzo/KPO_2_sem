#include "stdafx.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 1, menu1(), menu2();
	
	int Months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	do {
		//����
		menu1();
		char n;
		cin >> n;
		cout << "\n";
		//��������
		while ('2' < n || n < '1') {
			cout << "�� ����� ������������ �����.\n";
			cout << "�������� ������������ ������� ���������� ���������\n";
			menu2();
			cin >> n;
			cout << "\n";
		}

		//���������� ���������

		switch (n) {

		case '1': {
			cout << "������� ����(� ������� ��������)\n";
			static char data[chislo];
			cin >> data;
			//�������� 
			for (int i = 0; i < 8; i++) {

				if (data[i] > '9' || data[i] < '0') {

					cout << "�� ����������� ����� ����!\n";
					cout << "������� ����(� ������� ��������)\n";
					cin >> data;
				}
			}
			int dol;
			//���������� ������ 
			int mes = (data[2] - '0') * 10 + data[3] - '0';
			//���������� ��� 
			int den = (data[0] - '0') * 10 + data[1] - '0';
			//��� �������� ������������ ����
			
			int god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			bool cel = Checking(god);
			while (cel == 0 && mes == 2 && den > 28) {

				cout << "�� ����������� ����� ����!\n";
				cout << "������� ����(� ������� ��������)\n";
				cin >> data;

				//���������� ������ �� ����
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ��� �� ����
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';
			}
			while (data[0] > '3' || data[0] < '0' || mes > 12 || mes < 1 || den < 1 || den > 31) {


				cout << "�� ����������� ����� ����!\n";
				cout << "������� ����(� ������� ��������)\n";
				cin >> data;
				//���������� ������ �� ����
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ��� �� ����
				den = (data[0] - '0') * 10 + data[1] - '0';
				god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';

			}
			//���������� ���� �� ����
			god = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + (data[6] - '0') * 10 + data[7] - '0';

			//���� ���� ��������
			cout << "������� ���� ��������(� ������� ��������)\n";
			static char birth[chislo];
			cin >> birth;
			//�������� 
			for (int i = 0; i < 8; i++) {

				if (birth[i] > '9' || birth[i] < '0') {

					cout << "�� ����������� ����� ����!!\n";
					cout << "������� ���� ��������(� ������� ��������)\n";
					cin >> birth;
				}
			}
			//���������� ������
			int mesbirth = (birth[2] - '0') * 10 + birth[3] - '0';
			//���������� ���
			int denbirth = (birth[0] - '0') * 10 + birth[1] - '0';
			//��������
			
			int godbirth = (birth[4] - '0') * 1000 + (birth[5] - '0') * 100 + (birth[6] - '0') * 10 + birth[7] - '0';
			bool cell = Checking(godbirth);
			while (cel== 0 && mesbirth == 2 && denbirth > 28) {

				cout << "�� ����������� ����� ����!!\n";
				cout << "������� ����(� ������� ��������)\n";
				cin >> data;
				//���������� ������
				mes = (data[2] - '0') * 10 + data[3] - '0';
				//���������� ���
				den = (data[0] - '0') * 10 + data[1] - '0';
				godbirth = (birth[4] - '0') * 1000 + (birth[5] - '0') * 100 + (birth[6] - '0') * 10 + birth[7] - '0';
			}
			while (birth[0] > '3' || birth[1] < '0' || mesbirth > 12 || mesbirth < 1 || denbirth < 1 || denbirth > 31) {

				cout << "�� ����������� ����� ����!!\n";
				cout << "������� ���� ��������(� ������� ��������)\n";
				cin >> birth;
				//���������� ������
				mesbirth = (birth[2] - '0') * 10 + birth[3] - '0';
				//���������� ���
				denbirth = (birth[0] - '0') * 10 + birth[1] - '0';
				godbirth = (birth[4] - '0') * 1000 + (birth[5] - '0') * 100 + (birth[6] - '0') * 10 + birth[7] - '0';
			}
			//���������� ���� 
			godbirth = (birth[4] - '0') * 1000 + (birth[5] - '0') * 100 + (birth[6] - '0') * 10 + birth[7] - '0';

			//����� ���������� � ����

			cout << "���� �������� ����: " << den << ":" << mes << ":" << god << "\n";
			cout << "��� ���� ��������: " << denbirth << ":" << mesbirth << ":" << godbirth << "\n";
			cel = 0;
			//�������� �� ������������
			/*int Checking(int x, int y);*/
			if (Checking(god) == 1) {
				cout << "������ ��� �������� ���������� \n";
			}
			else {
				cout << "������ ��� �� �������� ���������� \n";
			}
			//���������� ����������� ������ ��� � ����
			int quantity(int x, int y, int z);
			cout << "�������� ���� ���� �������� " << quantity(mes, den, Checking(god)) << " � ����\n";

			//���������� ���������� ���� �� ������ ���������� ��� ��������

			if (quantity(mes, den, Checking(god)) < quantity(mesbirth, denbirth, Checking(god))) {

				int daycout = quantity(mes, den, Checking(god));
				int daybirths = quantity(mesbirth, denbirth, Checking(god));
				int colvoday = daybirths - daycout;
				cout << "�� ���������� ������ ��� �������� " << colvoday << " ���(��)\n";
			}
			else if (quantity(mes, den, Checking(god)) == quantity(mesbirth, denbirth, Checking(god))) {
				cout << " � ��� ��������!! \n";

			}

			else {

				int daycout = quantity(mes, den, Checking(god));
				int jatgod = god + 1;
				int daybirths = quantity(mesbirth, denbirth, Checking(jatgod));
				int daygod = 365 + Checking(god);
				int daydop = daygod - daycout;
				int colvoday = daybirths + daydop;
				cout << "�� ���������� ������ ��� �������� " << colvoday << " ���(��)\n";
			}

			day_prog(Checking(god));
			nameMounth( mes, Months);

		}

				//�����

		case '2': {

			cout << "��������� ��������� \n";

			return 0;
		}
		}
	} while (a != 0);
	return 0;
}

//�������

//������� ����
int menu1() {
	using namespace std;
	cout << "�������� ������� ���������� ���������: \n";
	cout << "1 - ���������� � �������� ���� ���� \n";
	cout << "2 - ����� �� ��������� \n";
	cout << "\n";
	cout << "������� ���������� ���������: ";
	return 0;
};

//����������� � ����
int menu2() {
	int menu1();
	using namespace std;

	cout << "�� ����� ������������ ������� ����������\n";
	menu1();
	return 0;
};


