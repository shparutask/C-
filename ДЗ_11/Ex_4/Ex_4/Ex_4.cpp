#include <iostream>
//using namespace std;

template<class T>
class numeric_limits {};

// Вариант с препроцессором
#define NUMLIM(type, val) template <>\
class numeric_limits<type> {\
public:\
	static char max() {\
		return val;\
	}\
};

NUMLIM(int, 0x7FFFFFFF);
NUMLIM(unsigned, 0xFFFFFFFF);

int main() {
	int a = numeric_limits<int>::max();
	unsigned b = numeric_limits<unsigned>::max();
	system("pause");
	return 0;
}