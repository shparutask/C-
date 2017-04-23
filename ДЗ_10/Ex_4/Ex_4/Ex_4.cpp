using namespace std;
#include <iostream>

int main() {
	double x;
	cin >> x;
	auto p = reinterpret_cast<int*>(&x);
	int px1 = p[1];
	int px2 = p[2];
	cout << px1 << endl;
	cout << px2 << endl;

	system("pause");
	return 0;
}

