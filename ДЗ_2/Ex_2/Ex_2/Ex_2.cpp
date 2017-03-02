#include <iostream>
using namespace std;

int main()
{
	int* a[10];

	for (int i = 0; i < 10; i++) {
		a[i] = new int[i + 1];
		for (int j = 0; j < i - 1; j++) {
			a[i][j] = 0;
		}
		a[i][i] = 1;

		for (int j = 0; j < i; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}