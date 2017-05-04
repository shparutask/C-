#define NUMLIM(double) 0x7FFFFFFFFFFFFFFF;
#define NUMLIM(int) 0x7FFFF;
#define NUMLIM(short) 0x7FFF;
#define NUMLIM(char) 0xFF;
#include <iostream>
using namespace std;

int main() {	cout << NUMLIM(unsigned);	cout << NUMLIM(int);	system("pause");	return 0;}