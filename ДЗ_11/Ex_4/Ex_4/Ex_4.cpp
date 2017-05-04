#define NUMLIM(name, val) val;
#include <iostream>
using namespace std;

int main() {	cout << NUMLIM(double, 0x7FFFFFFFFFFFFFFF);	cout << "\n";	cout << NUMLIM(int, 0x7FFFF);	system("pause");	return 0;}