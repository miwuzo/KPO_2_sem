#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	std::vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	int target1 = 3;

	int num_items1 = std::count(v.begin(), v.end(), target1);
	cout << "число: " << target1 << " количество: " << num_items1 << '\n';
	int num_items3 = std::count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	cout << "количество элементов кратных 3: " << num_items3 << '\n';

	cout << endl << " Лямбда, захват переменных" << endl;
	for (auto i : v) [i]() {if (i % 3 == 0) cout << i << ' '; }();
	cout << endl << " Лямбда с параметрами" << endl;
	for (auto i : v) [](auto i) {if (i % 3 == 0) cout << i << ' '; }(i);
	cout << endl << " Лямбда без параметров" << endl;
	for (auto i : v) [i] {if (i % 3 == 0) cout << i << ' '; }();
}