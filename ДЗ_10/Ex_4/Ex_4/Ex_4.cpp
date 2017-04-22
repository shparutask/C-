using namespace std;
#include <iostream>

int main() {
	double x;
	cin >> x;
	double* px = &x;
	auto p = reinterpret_cast<char*>(px);
	char* px1 = new char(4);
	char* px2 = new char(4);
	for (int i = 0; i < 4; i++) {		px1[i] = px[i];		px2[i] = px[i + 4];	}	int x1 = reinterpret_cast<int>(px1);	int x2 = reinterpret_cast<int>(px2);	cout << x1 << endl;	cout << x2 << endl;	system("pause");	return 0;}

