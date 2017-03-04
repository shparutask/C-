#include <iostream>
using namespace std;

class stack {
public:
	stack();
	void push(int new_element);
	int pop();
	int& max();

private:
	int* a;
	int* p;
	int size;
	int count;
};

stack::stack() {
	a = new int[100];
	p = a;
	size = 100;
	count = 0;
}

void stack::push(int new_element) {
	count++;
	if (count >= 100) {
		size *= 2;
		int* a1 = new int[size];
		for (int i = 0; i < count; i++) {
			a1[i] = a[i];
		}
		a = a1;
		delete[] a1;
	}
	p++;
	a[count] = new_element;
}

int& stack::max() {
	int* max = a;
	for (int* k = a; k < p; k++)
	{
		if (*k >= *max) max = k;
	}
	return *max;
}

int stack::pop()
{
	int b = *p;
	p--;
	return b;
}

int main() {
	stack s;
	s.push(3);
	s.push(5);
	s.push(3);
	s.push(7);
	cout << s.pop();
	s.max()++;
	cout << " " << s.max();
	system("pause");
	return 0;
}