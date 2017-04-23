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
	
	m_string& operator= (m_string s) {
		this->len = s.len;
		this->p = s.p;
		return *this;
	}

	m_string(const m_string &str) {
		*this = str;
	}
};


void swp(m_string& x, m_string& y)
{
	swap(x.p, y.p);
	swap(x.len, y.len);
}


int main()
{
	m_string s1 = "abc";
	m_string s2 = "klmfgh";
	swp(s1, s2);
	system("pause");
	return 0;
}

