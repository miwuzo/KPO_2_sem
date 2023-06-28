#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include "C:\Users\yana\Desktop\SE_Lab06\SE_Lab06S\SE_Lab06L\Dictionary.h"
#pragma comment(lib, "C:\\Users\\yana\\Desktop\\SE_Lab06\\SE_Lab06S\\Debug\\SE_Lab06L.lib")


#if (defined TEST_CREATE_01 && defined TEST_CREATE_02) || (defined TEST_CREATE_01 && defined TEST_ADDENTRY_03) || (defined TEST_CREATE_01 && defined TEST_ADDENTRY_04) || (defined TEST_CREATE_01 && defined TEST_GETENTRY_05) || (defined TEST_CREATE_01 && defined TEST_DELENTRY_06) || \
(defined TEST_CREATE_01 && defined TEST_UPDENTRY_07) || (defined TEST_CREATE_01 && defined TEST_UPDENTRY_08) || (defined TEST_CREATE_01 && defined TEST_DICTIONARY) || (defined TEST_CREATE_02 && defined TEST_ADDENTRY_03) || (defined TEST_CREATE_02 && defined TEST_ADDENTRY_04) || \
(defined TEST_CREATE_02 && defined TEST_GETENTRY_05) || (defined TEST_CREATE_02 && defined TEST_DELENTRY_06) || (defined TEST_CREATE_02 && defined TEST_UPDENTRY_07) || (defined TEST_CREATE_02 && defined TEST_UPDENTRY_08) || (defined TEST_CREATE_02 && defined TEST_DICTIONARY) || \
(defined TEST_ADDENTRY_03 && defined TEST_ADDENTRY_04) || (defined TEST_ADDENTRY_03 && defined TEST_GETENTRY_05) || (defined TEST_ADDENTRY_03 && defined TEST_DELENTRY_06) || (defined TEST_ADDENTRY_03 && defined TEST_UPDENTRY_07) || (defined TEST_ADDENTRY_03 && defined TEST_UPDENTRY_08) || \
(defined TEST_ADDENTRY_03 && defined TEST_DICTIONARY) || (defined TEST_ADDENTRY_04 && defined TEST_GETENTRY_05) || (defined TEST_ADDENTRY_04 && defined TEST_DELENTRY_06) || (defined TEST_ADDENTRY_04 && defined TEST_UPDENTRY_07) || (defined TEST_ADDENTRY_04 && defined TEST_UPDENTRY_08) || \
(defined TEST_ADDENTRY_04 && defined TEST_DICTIONARY) || (defined TEST_GETENTRY_05 && defined TEST_DELENTRY_06) || (defined TEST_GETENTRY_05 && defined TEST_UPDENTRY_07) || (defined TEST_GETENTRY_05 && defined TEST_UPDENTRY_08) || (defined TEST_GETENTRY_05 && defined TEST_DICTIONARY) || \
(defined TEST_DELENTRY_06 && defined TEST_UPDENTRY_07) || (defined TEST_DELENTRY_06 && defined TEST_UPDENTRY_08) || (defined TEST_DELENTRY_06 && defined TEST_DICTIONARY) || (defined TEST_UPDENTRY_07 && defined TEST_UPDENTRY_08) || (defined TEST_UPDENTRY_07 && defined TEST_DICTIONARY) || (defined TEST_UPDENTRY_08 && defined TEST_DICTIONARY)
#error ���������� ������� ����� ���������
#endif

using namespace std;
using namespace Dictionary;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try {
#ifdef TEST_CREATE_01
		Instance d1 = Create("�������������,�� � �������� ������� ���������, ������� ���� ������ 20", 7);
#elif defined TEST_CREATE_02
		Instance d1 = Create("�������������", 101);
#elif !defined TEST_DICTIONARY
		Instance d1 = Create("�������������", 6);
#elif defined TEST_DICTIONARY
		Instance d1 = Create("�������������", 7);
#endif

		Entry e1 = { 1, "������" }, e2 = { 2, "���������" }, e3 = { 3, "���������" }, e4 = { 4, "������" }, e5 = { 5, "��������" }, e6 = { 6, "������" }, e7 = { 7, "�����������" }, e8 = { 3, "���������" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		AddEntry(d1, e6);
#ifdef TEST_DICTIONARY
		AddEntry(d1, e7);
#elif defined TEST_ADDENTRY_03
		Entry e9 = { 12, "����������" }, e10 = { 21, "��������" };
		AddEntry(d1, e9);
		AddEntry(d1, e10);
#elif defined TEST_ADDENTRY_04
		AddEntry(d1, e8);
#endif

#ifdef TEST_DELENTRY_06
		DelEntry(d1, 25);
#elif defined TEST_DICTIONARY
		DelEntry(d1, 2);
#endif

#ifdef TEST_GETENTRY_05
		GetEntry(d1, 22);
#elif defined TEST_DICTIONARY
		DelEntry(d1, 4);
#endif

#ifdef TEST_UPDENTRY_07
		Entry newentry = { 16, "��������" };
		UpdEntry(d1, 22, newentry);
#elif defined TEST_UPDENTRY_08
		Entry newentry = { 5, "��������" };
		Dictionary::UpdEntry(d1, 1, newentry);
#elif defined TEST_DICTIONARY
		Entry newentry = { 16, "��������" };
#endif	
#if defined TEST_DICTIONARY
		Dictionary::UpdEntry(d1, 3, newentry);
#endif

		Print(d1);
		Instance d2 = Create("�������", 7);
		Entry s1 = { 9, "��������" }, s2 = { 8, "����" }, s3 = { 7, "����" }, s4 = { 6, "����������" }, s5 = { 5, "����������" }, s6 = { 4, "������" }, s7 = { 3, "���������" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		AddEntry(d2, s4);
		AddEntry(d2, s5);
		AddEntry(d2, s6);
		AddEntry(d2, s7);
		Entry newentry2 = { 16, "������" };
		UpdEntry(d2, 8, newentry2);
		Print(d2);
		Delete(d1);
		Delete(d2);
	}
	catch (const char* e) {
		cout << e << endl;
	};
	system("pause");
	return 0;
}