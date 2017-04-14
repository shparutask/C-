#include <iostream>
using namespace std;

class m_string {
public:
	char* p;
	int len;

public:
	m_string(const char* s = "")
	{
		len = strlen(s);
		p = new char[len + 1];
		strcpy(p, s);
	}
	~m_string()
	{
		delete[] p;
	}
};

template <typename T>
void swp(T& x, T& y)
{
	T tmp = x.p;
	x.p = y.p;
	y.p = tmp;
	
	tmp = x.len;
	x.len = y.len;
	y.len = tmp;
}

int main()
{
	m_string s1 = "abc";
	m_string s2 = "klmfgh";
	swp(s1, s2);
	system("pause");
	return 0;
}

