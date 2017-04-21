#include <iostream>
#include <deque>
#include <vector>
using namespace std;

template <typename T>
class queue {
	deque<T> stk;
	int size;

public:
	queue() :
		size(0)
	{};
	void push(const T& x)
	{
		stk.push_back(x);
		size++;
	}

	T pop()
	{	
		T out = stk[0];
		for (int i = 0; i < size - 1; i++)
		{
			stk[i] = stk[i + 1];
		}
		size--;
		stk.pop_back();
		return out;
	}
};

int main() {
	queue<int> q;
	q.push(3);
	q.push(7);
	q.push(11);
	cout << q.pop()<< endl; 
	cout << q.pop(); 
	system("pause");
	return 0;
}