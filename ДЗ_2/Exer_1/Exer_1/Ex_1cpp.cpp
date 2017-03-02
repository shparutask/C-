#include <iostream>
using namespace std;

void reverse(int *a, int n)
{
	int *p = a;
	for (int* i = a + n - 1; i >= a + n / 2; --i)
	{
		int x = *i;
		*i = *p;
		*p = x;
		p++;
	}
}

int main()
{
	int a[6] = { 3, 5, 6, 8, 6, 4 };
	reverse(a, 6);
	system("pause");
	return 0;
}