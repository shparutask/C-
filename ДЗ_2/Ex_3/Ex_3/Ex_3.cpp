using namespace std;
#include <iostream>

void order(int &a, int &b, int &c) {
	int* mas = new int[3];
	mas[0] = a;
	mas[1] = b;
	mas[2] = c;

	for (int i = 0; i < 3; i++)
		for (int j = i; j > 0 && mas[j - 1] > mas[j]; j--)
			swap(mas[j - 1], mas[j]);
	a = mas[0];
	b = mas[1];
	c = mas[2];

	delete[] mas;
}

int main() {
	int a, b, c;

	cout << "Enter 3 numbers:\n";

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	order(a, b, c);
	cout << a << " " << b << " " << c << "\n";
	system("pause");
	return 0;
}