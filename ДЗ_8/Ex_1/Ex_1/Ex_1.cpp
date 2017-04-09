#include <map>;
#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	map<string, int> marks;

	int n;
	string s;
	int mark;
	cout << "Enter a number of pupils\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		cin >> mark;
		cout << endl;
		if (marks[s] < mark)
			marks[s] = mark;
	}

	for (auto& p : marks)
		cout << p.first << " " << p.second << "\n";
	system("pause");
	return 0;
}
