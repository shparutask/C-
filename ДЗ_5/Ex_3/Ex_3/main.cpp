#include <iostream>
#include <cmath>
using namespace std;

class stack {
public:
	~stack();
	void push(int new_element);
	int pop();
	double maxsin() const;

private:
	int* a = new int[100];;
	int* p = a;
	int size = 100;
	int count = 0;
	mutable double sinCashed;
	mutable bool bCashed = false;
	mutable bool IsAdded = false;
	mutable bool isFirst = true;
	mutable int countCashed = 0;
};

stack::~stack() {
	delete[] a;
}

void stack::push(int new_element) {
	bCashed = false;
	IsAdded = true;
	if (count >= size) {
		size *= 2;
		int* a1 = new int[size];
		p = a1;
		for (int i = 0; i < count; i++) {
			a1[i] = a[i];
			p++;
		}
		delete[] a;
		a = a1;
	}
	a[count] = new_element;
	count++;
	p++;
}

int stack::pop()
{
	bCashed = false;
	isFirst = true;
	int b = *p;
	p--;
	count--;
	return b;
}

double stack::maxsin() const {
	if (bCashed) return sinCashed;
	bCashed = true;
	if (isFirst) {
		double max_s = -1;
		for (int* i = a; i < a + count; i++)
			for (int* j = i; j < a + count; j++)
			{
				double s = sin(*i * *j);
				if (s > max_s) max_s = s;
			}
		sinCashed = max_s;
		isFirst = false;
		return sinCashed;
	}
	if (IsAdded) {
		for (int* i = a + countCashed; i < a + count; i++)
			for (int* j = a + 1; j < a + count; j++)
			{
				double s = sin(*i * *j);
				if (s > sinCashed) sinCashed = s;
			}
		IsAdded = false;
		countCashed = count;
		return sinCashed;
	}
}

int main()
{
	stack s;
	s.push(3);
	s.push(5);
	s.push(3);
	s.push(7);
	cout << " " << s.maxsin();
	s.pop();
	s.push(6);
	cout << "\n" << s.maxsin();
	system("pause");
	return 0;
}