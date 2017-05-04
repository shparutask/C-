#include <iostream>
using namespace std;

class stack {
private:
	int* a = new int[100];
	int* p = a;
	int size = 100;
	int count = 0;

public:
	stack() {}
	~stack() {
		delete[] a;
	}
	void push(int new_element) {
		count++;
		if (count >= size) {
			size *= 2;
			int* a1 = new int[size];
			p = a1;
			for (int i = 0; i < count; i++) {
				a1[i] = a[i];
				p++;
			}
			delete[] a;
		}
		p++;
		a[count] = new_element;
	}
	int pop() {
		int b = *p;
		p--;
		return b;
	}
	int& max() {
		int* max = a;
		for (int* k = a; k < p; k++)
		{
			if (*k >= *max) max = k;
		}
		return *max;
	}

	stack(stack&& from)
	{
		a = from.a;
		p = from.p;
		size = from.size;
		count = from.count;
		from.p = nullptr;
		from.a = nullptr;
	}

	stack& operator=(stack&& from)
	{
		a = from.a;
		p = from.p;
		size = from.size;
		count = from.count;
		from.p = nullptr;
		from.a = nullptr;
		return *this;
	}
};

stack f() {
	stack s;
	s.push(2);
	s.push(34);
	return s;
}

int main() {
	auto result = f();

	cout << result.pop() << endl;
	system("pause");
	return 0;
}