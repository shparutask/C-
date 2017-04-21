#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void m_sort(vector<int>& v, int n)
{
	sort(v.begin(), v.end(), [n](int i, int j) {
		int I = pow(10.0, (double)n);
		return i % I < j % I; });
}

int main()
{
	int n;
	vector<int> x;
	cout << "Enter elements of vector:\n";
	do {
		cin >> n;
		x.push_back(n);
	} while (n != 0);

	cout << "Enter a pow\n";

	cin >> n;

	m_sort(x, n);

	for (auto& p : x) {
		cout << p << endl;
	}

	system("pause");
	return 0;
}