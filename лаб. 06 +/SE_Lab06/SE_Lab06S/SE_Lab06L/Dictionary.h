#pragma once
#include <string>
#define DICTNAMEMAXSIZE 20
#define DICTMAXSIZE 100
#define ENTRYNAMEMAXSIZE 30
#define THROW01 "Create: �������� ������ ����� �������"
#define THROW02 "Create: �������� ������ ������������ ������� �������"
#define THROW03 "AddEntry: ������������ �������"
#define THROW04 "AddEntry: ������������ ��������������"
#define THROW05 "GetEntry: �� ������ �������"
#define THROW06 "DelEntry: �� ������ �������"
#define THROW07 "UpdEntry: �� ������ �������"
#define THROW08 "UpdEntry: ������������ ��������������"

using namespace std;

namespace Dictionary {
	struct Entry {
		int id;
		char name[ENTRYNAMEMAXSIZE];
	};
	struct Instance {
		string name;
		int maxsize;
		int size;
		Entry* dictionary;
	};
	Instance Create(
		string name,
		int size
	);
	void AddEntry(
		Instance& inst,
		Entry ed
	);
	void DelEntry(
		Instance& inat,
		int id
	);
	void UpdEntry(
		Instance& inst,
		int id,
		Entry new_ed
	);
	Entry GetEntry(
		Instance inst,
		int id
	);
	void Print(Instance d);
	void Delete(Instance& d);
};