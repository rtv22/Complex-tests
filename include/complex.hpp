#include <iostream>

using namespace std;

class complex
{
private:
	double real;
	double imaginary;
public:
	complex(double a, double b);
	complex();
	void set();
	double r();
	double i();
	void print(std::ostream&) const;
	complex sum(complex) const;
	complex sub(complex) const;
	complex mult(int) const;
	complex div(int) const;
	complex(const complex&);
	complex operator*(complex&);
	complex operator/(complex&);
	bool operator==(complex&);
	complex operator=(complex&);
	complex operator+=(complex&);
	complex operator-=(complex&);
	complex operator*=(complex&);
	complex operator/=(complex&);
	friend ostream& operator<<(ostream&, complex&);
	friend istream& operator>>(istream&, complex &);
};
