//using namespace std;
#include <iostream>

template<class T>
class numeric_limits {};

template <>
class numeric_limits<int> {
public:
	static int max() {
		return 0xFFFF;
	}
};

template <>
class numeric_limits<double> {
public:
	static double max() {
		return 0x7FFFFFFFFFFFFFFF;
	}
};

template <>
class numeric_limits<short> {
public:
	static short max() {
		return 0x7FFF;
	}
};

template <>
class numeric_limits<char> {
public:
	static char max() {
		return 0xFF;
	}
};

int main() {
	unsigned short M = numeric_limits<unsigned short>::max();

	system("pause");
	return 0;
}