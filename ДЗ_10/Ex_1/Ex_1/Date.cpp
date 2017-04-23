using namespace std;
#include <iostream>
#include <map>
#include <string>
#include "Date.h"

string Date::Is_Holiday() {
	auto m = holidays.find(date);
	if (m == holidays.end())
		return "It's not holiday";
	else
		return "It' s a holiday: " + m->second + "\n";
};