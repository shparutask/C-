#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum_of_digits(int i)
{
	int sum_i = 0;
	while (i != 0) {		
		sum_i += (i % 10);
		i /= 10;
	}	
	return sum_i;
}

int main() {
	int n;
	vector<int> x;
	do {
		cin >> n;
		x.push_back(n);
	} while (n != 0);

	sort(x.begin(), x.end(), [](int i, int j) {return sum_of_digits(i) > sum_of_digits(j); });

	for (auto& p : x) {
		cout << p << endl;
	}

	system("pause");
	return 0;
}