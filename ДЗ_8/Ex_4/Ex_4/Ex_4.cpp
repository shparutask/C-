#include <iostream>;
#include <vector>;
using namespace std;

template <typename T>
void print_1(vector<T> x)
{
	for (auto& i : x)
		cout << i << endl;
}

template <typename T>
void print_2(vector<T> x) {
	for (auto it = x.begin(); it != x.end(); it++)
		cout << *it << endl;
}

int main() {
	vector<int> v1{ 23, 34, 1, 4, 7 };
	vector<char*> v2{ "qewr", "refv", "we", ";lk" };
	print_1(v2);
	cout << endl;
	print_2(v2);
	system("pause");
	return 0;
}