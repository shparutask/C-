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
	throw "Ёлементы кончились";
	p--;
	return b;
}


void f(stack& s)
{
	int* p = new int[1000];
	// Е тут, допустим, мы что-то делаем с p и s
	try {
		cout << s.pop();
	}
	catch(char* s){
		cout << s;
	}
	// Е а тут еще что-то делаем с p и s
	delete[] p;
	// ѕотенциальна€ утечка пам€ти: delete может и не вызватьс€!
}

int main()
{
}