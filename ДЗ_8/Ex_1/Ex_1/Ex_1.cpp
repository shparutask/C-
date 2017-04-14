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
		auto p = marks.find(s);
		if (p == marks.end()|| p->second < mark)
			p->second = mark;
	}

	for (auto& p : marks)
		cout << p.first << " " << p.second << "\n";

	system("pause");
	return 0;
}
