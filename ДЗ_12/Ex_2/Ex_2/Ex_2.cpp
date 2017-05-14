#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k = 0;

	for(int i = 0; i < 32; i++) {
		if (n & (1 << i)) {
			k++;
		}
	}

	cout << "\n" << k;
	system("pause");
	return 0;
}