#include <iostream>
using namespace std;

class Rhombus {
protected:
	double x1, y1, length1; //Отрезок диагонали, параллельной оси Y
	double length2; //Отрезок диагонали, параллельной оси X

public:
	Rhombus(double x1, double y1, double length1, double length2) {
		this->x1 = x1;
		this->y1 = y1;
		this->length1 = length1;
		this->length2 = length2;
	}

	virtual void draw() {
		cout << "Rhombus ABCD: coordinates of segments\n";
		cout << "AB = (" << x1 << "," << y1 << "),("<< x1 + length2 / 2 << "," << y1 - length1 / 2 <<")\n";
		cout << "BC = (" << x1 + length2 / 2 << "," << y1 - length1 / 2 << "),("<< x1 << "," << y1 - length1 << ")\n";
		cout << "CD = (" << x1 << "," << y1 - length1 << "),("<< x1 - length2 / 2 << "," << y1 - length1 / 2 << ")\n";
		cout << "DA = (" << x1 - length2 / 2 << "," << y1 - length1 / 2 <<  "),("<< x1 << "," << y1 << ")\n";
	}
}; 

class color_Rhombus : public Rhombus {
	char* color = new char[100];
public:
	color_Rhombus(double x1, double y1, double length1, double length2, char* color): Rhombus(x1, y1, length1, length2) {
		this->color = color;
	}

	/*~color_Rhombus() {
		delete[] color;
		delete color;
	}*/

	void draw() override {
		cout << "Rhombus ABCD: coordinates of segments\n";
		cout << "AB = (" << x1 << "," << y1 << "),(" << x1 + length2 / 2 << "," << y1 - length1 / 2 << ")\n";
		cout << "BC = (" << x1 + length2 / 2 << "," << y1 - length1 / 2 << "),(" << x1 << "," << y1 - length1 << ")\n";
		cout << "CD = (" << x1 << "," << y1 - length1 << "),(" << x1 - length2 / 2 << "," << y1 - length1 / 2 << ")\n";
		cout << "DA = (" << x1 - length2 / 2 << "," << y1 - length1 / 2 << "),(" << x1 << "," << y1 << ")\n";
		cout << color << "\n";	
	};
};

int main() {
	Rhombus r(1, 1, 2, 4);
	r.draw();
	color_Rhombus col_r(1, 1, 2, 4, "red");
	col_r.draw();
	system("pause");
	return 0;
}