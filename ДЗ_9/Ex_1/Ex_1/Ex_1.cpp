#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sum_of_digits(int i, int j)
{
	int sum_i = 0;
	int sum_j = 0;
	while (i != 0 || j != 0) {		
		sum_i += (i % 10);
		sum_j += (j % 10);
		i /= 10;
		j /= 10;
	}	
	return sum_i < sum_j;
}

int main() {
	int n;
	vector<int> x;
	do {
		cin >> n;
		x.push_back(n);
	} while (n != 0);

	sort(x.begin(), x.end(), sum_of_digits);

	for (auto& p : x) {
		cout << p << endl;
	}

	system("pause");
	return 0;
}