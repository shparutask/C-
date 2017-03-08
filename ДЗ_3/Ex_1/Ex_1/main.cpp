#include <iostream>
using namespace std;

class stack {
public:
	~stack();
	void push(int new_element);
	int pop();
	int& max();

private:
	int* a = new int[100];;
	int* p = a;
	int size = 100;
	int count = 0;
};

stack::~stack() {
	delete[] a;
	delete[] p;
}

void stack::push(int new_element) {
	count++;
	if (count >= size) {
		size *= 2;
		int* a1 = new int[size];
		for (int i = 0; i < count; i++) {
			a1[i] = a[i];
		}
		a = a1;
		delete[] a1; //новый кусок отведен на время, указатель a переставлен на него, а1 теперь лишний (если я верно понимаю)
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