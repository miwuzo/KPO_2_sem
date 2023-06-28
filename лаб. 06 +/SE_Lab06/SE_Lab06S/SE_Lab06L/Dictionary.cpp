#include <iostream>
#include <string>
#include "Dictionary.h"

using namespace std;
using namespace Dictionary;

int i;
bool flag;

Instance Dictionary::Create(string name, int size) {
	Instance dict;
	if (name.length() > DICTNAMEMAXSIZE)
		throw THROW01;
	if (size > DICTMAXSIZE)
		throw THROW02;
	dict.dictionary = new Entry[size];
	dict.size = 0;
	dict.name = name;
	dict.maxsize = size;
	return dict;
}

void Dictionary::AddEntry(Instance& inst, Entry ed) {
	if (inst.size > inst.maxsize)
		throw THROW03;
	for (int i = 0; i < inst.size; i++) {
		if (inst.dictionary[i].id == ed.id)
			throw THROW04;
	}
	inst.dictionary[inst.size] = ed;
	inst.size++;
}

void Dictionary::DelEntry(Instance& inst, int id) {
	flag = false;
	for (int i = 0; i < inst.size; i++) {
		if (inst.dictionary[i].id == id) {
			flag = true;
			for (int j = i; j < inst.size - 1; j++) {
				inst.dictionary[j] = inst.dictionary[j + 1];
			}
			inst.size--;
			break;
		}
	}

	if (!flag) throw THROW06;
}

void Dictionary::UpdEntry(Instance& inst, int id, Entry new_ed) {
	flag = false;
	for (int i = 0; i < inst.size; i++) {
		if (inst.dictionary[i].id == new_ed.id)
			throw THROW07;
	}
	for (int i = 0; i < inst.size; i++) {
		if (inst.dictionary[i].id == id) {
			inst.dictionary[i] = new_ed;
			flag = true;
		}
	}
	if (!flag)
		throw THROW08;
}

Entry Dictionary::GetEntry(Instance inst, int id) {
	for (int i = 0; i < inst.size; i++) {
		if (inst.dictionary[i].id == id) {
			/*cout << "\nНайден(а) " << inst.dictionary[i].name << "\n";*/
			return inst.dictionary[i];
		}
	}
	throw THROW05;
}

void Dictionary::Print(Instance d) {
	setlocale(LC_CTYPE, "rus");
	cout << "-------------" << d.name << "--------------\n";
	for (int i = 0; i < d.size; i++)
	{
		cout << d.dictionary[i].id << " " << d.dictionary[i].name << endl;
	}
}

void Dictionary::Delete(Instance& d)
{
	delete[] d.dictionary;
}