using namespace std;
#include <iostream>
#include <string>
#include "Date.h"

int main() {	
	string d;
	string m;

	cout << "Please, enter a day (from 1 to (29-31))" << endl;
	cin >> d;
	cout << "Please, enter a month {January, February, March, April, May, September, October, November, December}" << endl;
	cin >> m;
	Date date(d, m);
	cout << date.Is_Holiday();
	system("pause");
	return 0;
}