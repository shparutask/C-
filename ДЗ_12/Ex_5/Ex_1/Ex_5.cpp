#include <iostream>
#include <future>
using namespace std;

int Prime(int a)
{
	int i;
	if (a == 2)
		return 1;
	if (a == 0 || a == 1 || a % 2 == 0)
		return 0;
	for (i = 3; i*i <= a && a % i; i += 2)
		;
	return i*i > a;
}

int f1 (int n){
	int k = 0;
	for (int i = 0; i < n; i += 2) {
		if (Prime(i)) k++;
	}
	return k;
};
 
int f2 (int n) {
	int k = 0;
	for (int i = 1; i < n; i += 2) {
		if (Prime(i)) k++;
	}
	return k;
};

int main() {
	int n;
	cin >> n;

	auto fut1 = async(launch::async, f1, n);
	auto fut2 = async(launch::async, f2, n);

	auto res = fut1.get() + fut2.get();

	cout << res;
	system("pause");
	return 0;
}