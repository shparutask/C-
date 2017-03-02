#include <iostream>;
using namespace std;

bool compare(const char* s1,  const char* s2) {
	int i = 0;
	while (s1[i] != '\0' || s2[i] != '\0') {
		if (s1[i] != s2[i]) return false;
		i++;
	}
	return true;
}

int main()
{
	char s1[100];
	char s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);

	bool b = compare(s1, s2);
	cout << b;
	system("pause");
    return 0;
}

