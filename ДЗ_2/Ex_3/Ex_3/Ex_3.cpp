using namespace std;
#include <iostream>
#include <algorithm>

void order(int &a, int &b, int &c) {
	int mas[3]{ a, b, c };

	/*for (int i = 0; i < 3; i++)
		for (int j = i; j > 0 && mas[j - 1] > mas[j]; j--)
			swap(mas[j - 1], mas[j]);
	a = mas[0];
	b = mas[1];
	c = mas[2];

	delete[] mas;*/
	sort(mas, mas + 3);
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