#include <iostream>

using namespace std;

class complex
{
private:
	double real;
	double imaginary;
public:
	complex(double , double);
	complex();
	double r();
	double i();
	void set();
	void print(std::ostream&) const;
	complex sum(complex) const;
	complex sub(complex) const;
	complex mult(int) const;
	complex div(int) const;
	complex(const complex&);
	complex operator*(complex &copy)const;
	complex operator/(complex& copy)const;
	bool operator==(complex& copy)const;
	complex operator=(complex& copy)const;
	complex operator+=(complex& copy)const;
	complex operator-=(complex& copy)const;
	complex operator*=(complex& copy)const;
	complex operator/=(complex& copy)const;
};
