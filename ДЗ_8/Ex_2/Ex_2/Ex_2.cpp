#include <iostream>
#include <algorithm>
#include <vector>;
using namespace std;

bool checkDigits(vector<int> v, int d)
{
	return all_of(v.begin(), v.end(), [d](int i) { return (i % 10 == d); });
}

int main() {
	vector<int> v{ 2, 32, 162, 78, 9};
	bool b = checkDigits(v, 2);	if (b) cout << "SUCCESS!";
	system("pause");
	return 0;
}