using namespace std;
#include <iostream>
#include <map>
#include <string>
#include "Date.h"

void Date::Is_Holiday() {
	auto m = holidays.find(date);
	if (m == holidays.end())
		cout << "It's not holiday";
	else
		cout << "It' s a holiday: " << m->second << endl;
};