#include <iostream>
#include <vector>
using namespace std;

template <class T>
typename T::value_type avg(T b, T e)
{
	typename T::value_type avg = 0;
	int n = 0;
	for (T p = b; p < e; p++)
		if (*p > 0) {
			avg += *p;
			n++;
		}
	return avg / n;
}

int main() {
	int n;
	vector<int> x;
	do {
		cin >> n;
		x.push_back(n);
	} while (n != 0);

	cout << avg(x.begin(), x.end());
	system("pause");
	return 0;
}