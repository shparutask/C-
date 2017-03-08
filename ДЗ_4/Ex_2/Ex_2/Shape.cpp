#include <iostream>
using namespace std;

class shape {
protected:
	double x, y;
public:
	virtual double area()
		= 0;
	virtual double perim()
		= 0;
};

class circle : public shape {
	double radius;
	const double PI = 3.1415926535897932384626433832795;

public:
	circle(double x, double y, double r): shape() {
		radius = r;
	}

	double area() override {
		return PI*pow(radius, 2.0);
	}
	double perim() override {
		return 2 * PI*radius;
	};
};

class isosceles_triangle : public shape {
	double heigth, base_l;
public:
	isosceles_triangle(double h, double l) : shape() {
		heigth = h;
		base_l = l;
	}

	double area() override {
		return 0.5 * heigth * base_l;
	}
	double perim() override {
		double a = pow(0.5 * base_l, 2.0) + pow(heigth, 2.0);
		a = pow(a, 0.5);
		return 2 * a + base_l;
	};
};

int main() {
	cout << "Enter coordinates of circle's center and its radius:\n";
	double x, y, r;
	cin >> x;
	cin >> y;
	cin >> r;

	circle c(x, y, r);

	cout << "Square = " << c.area() << "\n";
	cout << "Perim = " << c.perim() << "\n";

	cout << "Enter cof triangle's heigth and its base:\n";
	double h, b;
	cin >> h;
	cin >> b;

	isosceles_triangle t(h, b);

	cout << "Square = " << t.area() << "\n";
	cout << "Perim = " << t.perim();

	system("pause");
	return 0;
}