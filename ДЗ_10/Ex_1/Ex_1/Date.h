using namespace std;
#include <iostream>
#include <map>
#include <string>

class Date {
	string date;

	map<string, string> holidays = { { "1 January", "New Year"},
								  { "23 February", "Defender of the Fatherland Day" },
								  { "8 March", "Woman's Day" },
								  { "1 May", "Spring and Labour Day" },
								  { "1 September", "Day of knowledge"} };
public:
	Date(string d, string m) {
		date = d + " " + m;
	}

	void Is_Holiday();
};
