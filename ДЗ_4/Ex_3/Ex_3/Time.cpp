#include <iostream>
using namespace std;

class time {
	int hour;
	int min;

public:
	time(int h, int m)
	{
		if (h < 0 || h > 24 || m < 0 || m > 60) {
			throw "Incorrect data";
		}
		hour = h;
		min = m;
	}
};

int main() {
	try{
		time t(12, 7);
	}
	catch (char* s) {
		cout << "Incorrect data\n";
	}
	
	try {
		time t1(25, 7);
	}
	catch (char* s) {
		cout << "Incorrect data 2";
	}

	system("pause");
}