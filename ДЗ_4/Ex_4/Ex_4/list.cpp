#include <iostream>
using namespace std;

struct list {
	int val;
	list* next;
public:
	list(int v) {
		val = v;
	}
};

int main() {
	int n;
	cout << "Enter count of list's elements:\n";
	cin >> n;
	list* first = new list(n);
	for (int i = n - 1; i > 0; i--) {
		list* p = new list(i);
		p->next = first;
		first = p;
	}

	list* p = first;
	for (int i = n; i > 0; i--) {
		cout << p->val << " ";
		p = p->next;
	}

	system("pause");
	return 0;
}
