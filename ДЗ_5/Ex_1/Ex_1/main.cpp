#include <iostream>
using namespace std;

class complex {
public:
	double re, im;
	complex(double re_ = 0, double im_ = 0) :
		re(re_), im(im_)	{}

	complex operator*(complex c1) {
		double n_re = c1.re*this->re - c1.im * this->im;
		double n_im = c1.re*this->im + c1.im*this->re;
		return complex(n_re, n_im);
	}

	complex& operator*=
		(complex c)
	{
		*this = *this * c;
		return *this;
	}
};

int main() {
	complex c1(3, 4);
	complex c2(4, 7);
	complex c3 = c1 * c2;
	cout << c3.re << " + i" << c3.im<<"\n";
	c3 *= c1;
	cout << c3.re << " + i" << c3.im;
	system("pause");
	return 0;
}