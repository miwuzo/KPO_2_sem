#include <iostream>
#include <windows.h>
#include "stdafx.h"
using namespace std;
using namespace Dictionary;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");
#if (defined(TEST_CREATE_01) + defined(TEST_CREATE_02) + defined(TEST_ADDENTRY_03) + defined(TEST_ADDENTRY_04) + defined(TEST_GETENTRY_05) + defined(TEST_DELENTRY_06) + defined(TEST_UPDENTRY_07) + defined(TEST_UPDENTRY_08) > 1 )
#error ���������� ���������� ��������
#endif
	try
	{
#if defined(TEST_CREATE_01) //�������� ������ ����� �������
		Instance d1 = Create("������ ���", 5);
#elif defined(TEST_CREATE_02) //�������� ������ ������������ ������� �������
		Instance d1 = Create("������a������", 100000);
#else 
		Instance d1 = Create("������a������", 5); //�������� �������
#endif
		Entry e1 = { 1, "�������" }, //�������� �������
			e2 = { 2, "�������" },
			e3 = { 3, "������" },
			e4 = { 4, "���������" },
#if defined(TEST_ADDENTRY_04) 
			e5 = { 2, "�������" };
#else 
			e5 = { 5, "�����" };
#endif
		addEntry(d1, e1); //���������� �������� � �������
		addEntry(d1, e2);
		addEntry(d1, e3);
		addEntry(d1, e4);
		addEntry(d1, e5);
#if defined(TEST_ADDENTRY_03) //������������ �������
		addEntry(d1, e5);
#endif

#if defined(TEST_GETENTRY_05) //GetEntry: �� ������ �������
		Entry ex2 = GetEntry(d1, 4000);
#else
		Entry ex2 = GetEntry(d1, 4); //����� ������� � ������� �� id 4
#endif
#if defined(TEST_DELENTRY_06) //DelEntry: �� ������ �������
		DelEntry(d1, 20000);
#else
		DelEntry(d1, 2); //������� ������� � ������� �� id
#endif
#if defined(TEST_UPDENTRY_08) //UpdEntry: ������������ ��������������
		Entry newentry1 = { 1, "�������" };
#else 
		Entry newentry1 = { 6, "�����" };  //������� �������
#endif
#if defined(TEST_UPDENTRY_07) //UpdEntry: �� ������ �������
		UpdEntry(d1, 30000, newentry1);
#else
		UpdEntry(d1, 3, newentry1); //�������� ��-� ������� �� id
#endif
		Print(d1); //����������� ��-�� �������

		Instance d2 = Create("��������", 5);
		Entry s1 = { 1, "�������" },
			s2 = { 2, "������" },
			s3 = { 3, "�������" };
		addEntry(d2, s1);
		addEntry(d2, s2);
		addEntry(d2, s3);

		Entry newentry3 = { 3, "��������" };
		UpdEntry(d2, 3, newentry3);
		Print(d2);
		Delete(d1);
		Delete(d2);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
}