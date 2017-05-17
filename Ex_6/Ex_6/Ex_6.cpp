#include <iostream>
#include <vector>
using namespace std;

template <class T>
auto sum(T b, T e)
{
	decltype (*b * 2) sum = 0;

	int count = 0;
	for (T p = b; p < e; p++)
		count++;
	if (count % 2 == 0) e--;

	for (T p = b; p < e; p++)
	{
		sum += *p;
		p++;
	}
	return sum;
}

int main() {
	vector<int> x{ 3, 4, 6, 6, 7, 8 ,34, 5 };
	cout << sum(x.begin(), x.end());
	system("pause");
	return 0;
}