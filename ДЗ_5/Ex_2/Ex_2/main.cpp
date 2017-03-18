#include <iostream>
using namespace std;

struct treeNode {
	treeNode* parent = nullptr;
	treeNode* Left = nullptr;
	treeNode* Right = nullptr;
	int value = 0;

public:
	treeNode(int value) {
		this->value = value;
	}
};

struct BinaryTree {
	treeNode* root = nullptr;

public:

	void print_tree(treeNode* ptr) {
		cout << "\nNode = " << ptr->value;
		if (ptr->parent == nullptr) cout << " - It's a root";
		if (ptr->Left != nullptr) print_tree(ptr->Left);
		if (ptr->Right != nullptr) print_tree(ptr->Right);	
	}

	void add(int value) {
		treeNode* new_node = new treeNode(value);
		new_node->parent = new_node->Left = new_node->Right = 0;
		treeNode* ptr = root;
		treeNode* ptr1 = ptr;
		while (ptr != nullptr) {
			ptr1 = ptr;
			if (new_node->value < ptr->value)
				ptr = ptr->Left;
			else ptr = ptr->Right;
		}
		new_node->parent = ptr1;
		if(ptr1 == nullptr)
		root = new treeNode(value);
		else
			if (new_node->value < ptr1->value)
				ptr1->Left = new_node;
			else ptr1->Right = new_node;
			cout << "New node = " << new_node->value << "\n";
			if(ptr1 != nullptr)cout << "Its parent = " << new_node->parent->value << "\n";
			else cout << "It's a root\n";
	}
};

int main() {
	BinaryTree* tree = new BinaryTree();
	int n;
	cin >> n;
	while (n != 0) {
		tree->add(n);
		cin >> n;
	}

	tree->print_tree(tree->root);
	system("pause");
	return 0;
}