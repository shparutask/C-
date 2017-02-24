using namespace std;
#include <iostream>

void twice(int* i) {
	*i *= 2;
}

int main() {
	cout << "Enter a number\n";
	int i;
	cin >> i;
	twice(&i);
	cout << i << "\n";
	system("pause");
	return 0;
}