#include <iostream>
using namespace std;

class stack {
	int a[100];

public:
	stack();
	void push(int new_element);
	int pop();
	int max();

private:
	int* p;
	int length;
};

stack::stack() {
	p = a;
	length = 3;
}

void stack::push(int new_element) {
	p++;
	*p = new_element;
}

int stack::max() {
	int max = a[0];
	for (int* k = a; k < p; k++)
	{
		if (*k >= max) max = *k;
	}
	return max;
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
	cout << " " << s.max();
	system("pause");
	return 0;
}