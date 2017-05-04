#include <iostream>
#include <string>
#include <map>
#include <memory>
#include <algorithm>
using namespace std;

class Address {
public:
	string city;
	string street;
	string house;
	Address(string city, string street, string house) {
		this->city = city;
		this->street = street;
		this->house = house;
	}
	string str_addr() {
		return this->city + " " + this->street + " " + this->house;
	}
};

class AddressBook {
	map<string, shared_ptr<Address>> book;
public:
	void add(string name, string city, string street, string house) {
		shared_ptr<Address> n(new Address(city, street, house));
		book.insert(pair<string, shared_ptr<Address>>(name, n));

		for (auto p : book)
		{
			if (p.second == n)
				addHousemate(name, p.first);
		}
	}

	void addHousemate(string new_name, string name) {
		book[new_name] = book[name];
	}

	void remove(string name) {
		book.erase(book.find(name));
	}

	string address(string name) {
		return book.find(name)->second->str_addr();
	}
};

int main() {
	string name, city, street, house;
	cout << "Please, enter the name";
	cin >> name;

	cout << "Please, enter the city";
	cin >> city;
	cout << "Please, enter the street";
	cin >> street;
	cout << "Please, enter the house";
	cin >> house;

	AddressBook myBook;
	myBook.add(name, city, street, house);

	cout << myBook.address(name);
    system("pause");
	return 0;
}